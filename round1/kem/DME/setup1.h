const unsigned int E11 = 24;
const unsigned int E12 = 59;
const unsigned int E21 = 21;
const unsigned int E23 = 28;
const unsigned int E32 = 29;
const unsigned int E33 = 65;
const unsigned int F11 = 50;
const unsigned int F12 = 24;
const unsigned int F21 = 7;
const unsigned int F22 = 88;

const u128 G1[3][3] =
{
  {
    { UINT64_C(0x1000000), UINT64_C(0x0) },
    { UINT64_C(0x800000000000000), UINT64_C(0x0) },
    { UINT64_C(0x0), UINT64_C(0x0) }
  },
  {
    { UINT64_C(0x200000), UINT64_C(0x0) },
    { UINT64_C(0x0), UINT64_C(0x0) },
    { UINT64_C(0x10000000), UINT64_C(0x0) }
  },
  {
    { UINT64_C(0x0), UINT64_C(0x0) },
    { UINT64_C(0x20000000), UINT64_C(0x0) },
    { UINT64_C(0x0), UINT64_C(0x2) }
  }
};

const u128 G1_inverse[3][3] =
{
  {
    { UINT64_C(0xffffff8000000080), UINT64_C(0x7f) },
    { UINT64_C(0x3fffffffc00), UINT64_C(0x400) },
    { UINT64_C(0xffffffdfffffffe0), UINT64_C(0x1f) }
  },
  {
    { UINT64_C(0x100000000f), UINT64_C(0xfffffff0) },
    { UINT64_C(0xffffff7fffffff80), UINT64_C(0x7f) },
    { UINT64_C(0xfffffffc00000004), UINT64_C(0x3) }
  },
  {
    { UINT64_C(0xfffffffe), UINT64_C(0xffffffff) },
    { UINT64_C(0xfffffff800000008), UINT64_C(0x7) },
    { UINT64_C(0xc000000040000000), UINT64_C(0x3fffffff) }
  }
};

const u192 G2[2][2] =
{
  {
    { UINT64_C(0x4000000000000), UINT64_C(0x0), UINT64_C(0x0) },
    { UINT64_C(0x1000000), UINT64_C(0x0), UINT64_C(0x0) }
  },
  {
    { UINT64_C(0x80), UINT64_C(0x0), UINT64_C(0x0) },
    { UINT64_C(0x0), UINT64_C(0x1000000), UINT64_C(0x0) }
  }
};

const u192 G2_inverse[2][2] =
{
  {
    { UINT64_C(0x4222222222111111), UINT64_C(0x8888888884444444), UINT64_C(0x1110) },
    { UINT64_C(0x777777777bbbbbbb), UINT64_C(0xddddddeeeeeeeeef), UINT64_C(0xbddd) }
  },
  {
    { UINT64_C(0x7777bbbbbbbbbddd), UINT64_C(0xdeeeeeeeeef77777), UINT64_C(0xdddd) },
    { UINT64_C(0x2211111111088888), UINT64_C(0x4444444442222222), UINT64_C(0x8888) }
  }
};

const uint_least64_t EXPS1[64][6] =
{
  {
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x200000000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x200000000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x20),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x4000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200004000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x4000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200004000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x2000),
    UINT64_C(0x20),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x2000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x2000),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x10),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200004000000),
    UINT64_C(0x0),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x20),
    UINT64_C(0x2000),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x20000000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x20),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x4000000),
    UINT64_C(0x0),
    UINT64_C(0x2020),
    UINT64_C(0x0),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20040000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x20040000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x40000000),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x10)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20040000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x20040000000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x40000000),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x40000000),
    UINT64_C(0x20000000000)
  },
  {
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x200000000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20000000000),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x20000000000),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20040000000)
  },
  {
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20040000000)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x10),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x200000000000),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x200000800000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000010)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20000000000),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x20000000000),
    UINT64_C(0x40000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x20040000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x800000),
    UINT64_C(0x0),
    UINT64_C(0x20),
    UINT64_C(0x0),
    UINT64_C(0x20040000000)
  }
};

const uint_least64_t EXPS2[64][6] =
{
  {
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x2000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x2000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x200000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x80000000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80002000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x80000000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80002000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x40000),
    UINT64_C(0x200000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x40000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x40000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80002000),
    UINT64_C(0x0),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x200000),
    UINT64_C(0x40000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x200000),
    UINT64_C(0x40000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x80000000),
    UINT64_C(0x0),
    UINT64_C(0x240000),
    UINT64_C(0x0),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x800000200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x800000000),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x800000200),
    UINT64_C(0x0)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000000),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x800000000),
    UINT64_C(0x200)
  },
  {
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x2000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x200),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x200),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000200)
  },
  {
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000200)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x100000),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x2000),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10002000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800100000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x200),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x200),
    UINT64_C(0x800000000)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x0),
    UINT64_C(0x800000200)
  },
  {
    UINT64_C(0x0),
    UINT64_C(0x10000000),
    UINT64_C(0x0),
    UINT64_C(0x200000),
    UINT64_C(0x0),
    UINT64_C(0x800000200)
  }
};

const uint_least64_t min_poly = UINT64_C(0x1000018000003);
const fq_elem min_poly_a = UINT64_C(0x085427f8231b);
const fq_elem min_poly_b = UINT64_C(0xe9e8cde7438d);
const fq_elem min_poly_c = UINT64_C(0x0f76255af92e);
const fq_elem min_poly_d = UINT64_C(0x7263c233d79f);
const fq_elem min_poly_e = UINT64_C(0xc4c9079afb66);

