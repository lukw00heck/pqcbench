/* See https://ntruprime.cr.yp.to/software.html for detailed documentation. */

#include "params.h"
//#include "crypto_uint32.h"
#include "cop_types.h"
#include "rq.h"

void rq_encode(unsigned char *c,const modq *f)
{
  crypto_int32 f0, f1, f2, f3, f4;
  int i;

  for (i = 0;i < P/5;++i) {
    f0 = *f++ + qshift;
    f1 = *f++ + qshift;
    f2 = *f++ + qshift;
    f3 = *f++ + qshift;
    f4 = *f++ + qshift;
    /* now want f0 + 6144*f1 + ... as a 64-bit integer */
    f1 *= 3;
    f2 *= 9;
    f3 *= 27;
    f4 *= 81;
    /* now want f0 + f1<<11 + f2<<22 + f3<<33 + f4<<44 */
    f0 += f1 << 11;
    *c++ = f0; f0 >>= 8;
    *c++ = f0; f0 >>= 8;
    f0 += f2 << 6;
    *c++ = f0; f0 >>= 8;
    *c++ = f0; f0 >>= 8;
    f0 += f3 << 1;
    *c++ = f0; f0 >>= 8;
    f0 += f4 << 4;
    *c++ = f0; f0 >>= 8;
    *c++ = f0; f0 >>= 8;
    *c++ = f0;
  }
  /* XXX: using p mod 5 = 1 */
  f0 = *f++ + qshift;
  *c++ = f0; f0 >>= 8;
  *c++ = f0;
}

void rq_decode(modq *f,const unsigned char *c)
{
  crypto_uint32 c0, c1, c2, c3, c4, c5, c6, c7;
  crypto_uint32 f0, f1, f2, f3, f4;
  int i;

  for (i = 0;i < P/5;++i) {
    c0 = *c++;
    c1 = *c++;
    c2 = *c++;
    c3 = *c++;
    c4 = *c++;
    c5 = *c++;
    c6 = *c++;
    c7 = *c++;

    /* f0 + f1*6144 + f2*6144^2 + f3*6144^3 + f4*6144^4 */
    /* = c0 + c1*256 + ... + c6*256^6 + c7*256^7 */
    /* with each f between 0 and 4590 */

    c6 += c7 << 8;
    /* c6 <= 23241 = floor(4591*6144^4/2^48) */
    /* f4 = (16/81)c6 + (1/1296)(c5+[0,1]) - [0,0.75] */
    /* claim: 2^19 f4 < x < 2^19(f4+1) */
    /* where x = 103564 c6 + 405(c5+1) */
    /* proof: x - 2^19 f4 = (76/81)c6 + (37/81)c5 + 405 - (32768/81)[0,1] + 2^19[0,0.75] */
    /* at least 405 - 32768/81 > 0 */
    /* at most (76/81)23241 + (37/81)255 + 405 + 2^19 0.75 < 2^19 */
    f4 = (103564*c6 + 405*(c5+1)) >> 19;

    c5 += c6 << 8;
    c5 -= (f4 * 81) << 4;
    c4 += c5 << 8;

    /* f0 + f1*6144 + f2*6144^2 + f3*6144^3 */
    /* = c0 + c1*256 + c2*256^2 + c3*256^3 + c4*256^4 */
    /* c4 <= 247914 = floor(4591*6144^3/2^32) */
    /* f3 = (1/54)(c4+[0,1]) - [0,0.75] */
    /* claim: 2^19 f3 < x < 2^19(f3+1) */
    /* where x = 9709(c4+2) */
    /* proof: x - 2^19 f3 = 19418 - (1/27)c4 - (262144/27)[0,1] + 2^19[0,0.75] */
    /* at least 19418 - 247914/27 - 262144/27 > 0 */
    /* at most 19418 + 2^19 0.75 < 2^19 */
    f3 = (9709*(c4+2)) >> 19;

    c4 -= (f3 * 27) << 1;
    c3 += c4 << 8;
    /* f0 + f1*6144 + f2*6144^2 */
    /* = c0 + c1*256 + c2*256^2 + c3*256^3 */
    /* c3 <= 10329 = floor(4591*6144^2/2^24) */
    /* f2 = (4/9)c3 + (1/576)c2 + (1/147456)c1 + (1/37748736)c0 - [0,0.75] */
    /* claim: 2^19 f2 < x < 2^19(f2+1) */
    /* where x = 233017 c3 + 910(c2+2) */
    /* proof: x - 2^19 f2 = 1820 + (1/9)c3 - (2/9)c2 - (32/9)c1 - (1/72)c0 + 2^19[0,0.75] */
    /* at least 1820 - (2/9)255 - (32/9)255 - (1/72)255 > 0 */
    /* at most 1820 + (1/9)10329 + 2^19 0.75 < 2^19 */
    f2 = (233017*c3 + 910*(c2+2)) >> 19;

    c2 += c3 << 8;
    c2 -= (f2 * 9) << 6;
    c1 += c2 << 8;
    /* f0 + f1*6144 */
    /* = c0 + c1*256 */
    /* c1 <= 110184 = floor(4591*6144/2^8) */
    /* f1 = (1/24)c1 + (1/6144)c0 - (1/6144)f0 */
    /* claim: 2^19 f1 < x < 2^19(f1+1) */
    /* where x = 21845(c1+2) + 85 c0 */
    /* proof: x - 2^19 f1 = 43690 - (1/3)c1 - (1/3)c0 + 2^19 [0,0.75] */
    /* at least 43690 - (1/3)110184 - (1/3)255 > 0 */
    /* at most 43690 + 2^19 0.75 < 2^19 */
    f1 = (21845*(c1+2) + 85*c0) >> 19;

    c1 -= (f1 * 3) << 3;
    c0 += c1 << 8;
    f0 = c0;

    *f++ = modq_freeze(f0 + Q - qshift);
    *f++ = modq_freeze(f1 + Q - qshift);
    *f++ = modq_freeze(f2 + Q - qshift);
    *f++ = modq_freeze(f3 + Q - qshift);
    *f++ = modq_freeze(f4 + Q - qshift);
  }

  c0 = *c++;
  c1 = *c++;
  c0 += c1 << 8;
  *f++ = modq_freeze(c0 + Q - qshift);
}
