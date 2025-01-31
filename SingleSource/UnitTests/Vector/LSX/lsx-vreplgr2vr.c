#include "lsx_test_util.h"
#include <lsxintrin.h>

int
main ()
{
  __m128i __m128i_out, __m128i_result;
  __m128  __m128_out, __m128_result;
  __m128d __m128d_out, __m128d_result;
  v2u64 v2u64_op0, v2u64_op1, v2u64_op2;
  v4i32 v4i32_op0, v4i32_op1, v4i32_op2;

  int int_op0, int_op1, i = 1, fail;
  long int long_op0, long_op1;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  int_op0 = 0x0000000059815d00;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000400;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0xffffffff;
  __m128i_result = (__m128i){0xffffffffffffffff, 0xffffffffffffffff};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000020202020;
  __m128i_result = (__m128i){0x2020202020202020, 0x2020202020202020};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000ffffffff;
  __m128i_result = (__m128i){0xffffffffffffffff, 0xffffffffffffffff};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
  __m128i_result = (__m128i){0xffffffffffffffff, 0xffffffffffffffff};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x000000000000001e;
  __m128i_result = (__m128i){0x1e1e1e1e1e1e1e1e, 0x1e1e1e1e1e1e1e1e};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_b(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000400;
  __m128i_result = (__m128i){0x0400040004000400, 0x0400040004000400};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000ffffffff;
  __m128i_result = (__m128i){0xffffffffffffffff, 0xffffffffffffffff};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x000000007ff00000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
  __m128i_result = (__m128i){0x00ff00ff00ff00ff, 0x00ff00ff00ff00ff};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_h(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x00000000000000ff;
  __m128i_result = (__m128i){0x000000ff000000ff, 0x000000ff000000ff};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  int_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_w(int_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000400;
  __m128i_result = (__m128i){0x0000000000000400, 0x0000000000000400};
  __m128i_out = __lsx_vreplgr2vr_d(long_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  long_op0 = 0x3f8000003f800000;
  __m128i_result = (__m128i){0x3f8000003f800000, 0x3f8000003f800000};
  __m128i_out = __lsx_vreplgr2vr_d(long_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_d(long_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  long_op0 = 0x000000007ff00000;
  __m128i_result = (__m128i){0x000000007ff00000, 0x000000007ff00000};
  __m128i_out = __lsx_vreplgr2vr_d(long_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  long_op0 = 0x0000000000000000;
  __m128i_result = (__m128i){0x0000000000000000, 0x0000000000000000};
  __m128i_out = __lsx_vreplgr2vr_d(long_op0);
  check_lsx_out(&__m128i_result, &__m128i_out, sizeof(__m128i_out), __FILE__, __LINE__);

  return 0;
}
