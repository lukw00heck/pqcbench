/* See https://ntruprime.cr.yp.to/software.html for detailed documentation. */

#include "params.h"
#include "swap.h"
#include "rq.h"

/* caller must ensure that x-y does not overflow */
static int smaller_mask(int x,int y)
{
  return (x - y) >> 31;
}

static void vectormodq_product(modq *z,int len,const modq *x,const modq c)
{
  int i;
  for (i = 0;i < len;++i) z[i] = modq_product(x[i],c);
}

static void vectormodq_minusproduct(modq *z,int len,const modq *x,const modq *y,const modq c)
{
  int i;
  for (i = 0;i < len;++i) z[i] = modq_minusproduct(x[i],y[i],c);
}

static void vectormodq_shift(modq *z,int len)
{
  int i;
  for (i = len - 1;i > 0;--i) z[i] = z[i - 1];
  z[0] = 0;
}

/*
r = (3s)^(-1) mod m, returning 0, if s is invertible mod m
or returning -1 if s is not invertible mod m
r,s are polys of degree <p
m is x^p-x-1
*/
int rq_recip3(modq *r,const small *s)
{
  const int loops = 2 * P  + 1;
  int loop;
  modq f[P + 1]; 
  modq g[P + 1]; 
  modq u[loops + 1];
  modq v[loops + 1];
  modq c;
  int i;
  int d = P;
  int e = P;
  int swapmask;

  for (i = 2;i < P;++i) f[i] = 0;
  f[0] = -1;
  f[1] = -1;
  f[P] = 1;
  /* generalization: can initialize f to any polynomial m */
  /* requirements: m has degree exactly p, nonzero constant coefficient */

  for (i = 0;i < P;++i) g[i] = 3 * s[i];
  g[P] = 0;

  for (i = 0;i <= loops;++i) u[i] = 0;

  v[0] = 1;
  for (i = 1;i <= loops;++i) v[i] = 0;

  loop = 0;
  for (;;) {
    /* e == -1 or d + e + loop <= 2*p */

    /* f has degree p: i.e., f[p]!=0 */
    /* f[i]==0 for i < p-d */

    /* g has degree <=p (so it fits in p+1 coefficients) */
    /* g[i]==0 for i < p-e */

    /* u has degree <=loop (so it fits in loop+1 coefficients) */
    /* u[i]==0 for i < p-d */
    /* if invertible: u[i]==0 for i < loop-p (so can look at just p+1 coefficients) */

    /* v has degree <=loop (so it fits in loop+1 coefficients) */
    /* v[i]==0 for i < p-e */
    /* v[i]==0 for i < loop-p (so can look at just p+1 coefficients) */

    if (loop >= loops) break;

    c = modq_quotient(g[P],f[P]);

    vectormodq_minusproduct(g,P + 1,g,f,c);
    vectormodq_shift(g,P + 1);

#ifdef SIMPLER
    vectormodq_minusproduct(v,loops + 1,v,u,c);
    vectormodq_shift(v,loops + 1);
#else
    if (loop < P) {
      vectormodq_minusproduct(v,loop + 1,v,u,c);
      vectormodq_shift(v,loop + 2);
    } else {
      vectormodq_minusproduct(v + loop - P,P + 1,v + loop - P,u + loop - P,c);
      vectormodq_shift(v + loop - P,P + 2);
    }
#endif

    e -= 1;

    ++loop;

    swapmask = smaller_mask(e,d) & modq_nonzero_mask(g[P]);
    swap(&e,&d,sizeof e,swapmask);
    swap(f,g,(P + 1) * sizeof(modq),swapmask);

#ifdef SIMPLER
    swap(u,v,(loops + 1) * sizeof(modq),swapmask);
#else
    if (loop < P) {
      swap(u,v,(loop + 1) * sizeof(modq),swapmask);
    } else {
      swap(u + loop - P,v + loop - P,(P + 1) * sizeof(modq),swapmask);
    }
#endif
  }

  c = modq_reciprocal(f[P]);
  vectormodq_product(r,P,u + P,c);
  return smaller_mask(0,d);
}
