#include "s21_test.h"

START_TEST(s21_div_1) {
  s21_decimal dec_1 = {{0x383c3983, 0x3c0e6d29, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0x53ec8117, 0x220b2, 0x0, 0x0}};
  s21_decimal dec_check = {{0x66639e1e, 0x81794888, 0xe97a2e7d, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2) {
  s21_decimal dec_1 = {{0x760d7418, 0x49e39681, 0x2907c7, 0x80000000}};
  s21_decimal dec_2 = {{0x11cf5, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x43f667d4, 0xbb33c640, 0xdbb54d10, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3) {
  s21_decimal dec_1 = {{0xfa261afc, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal dec_2 = {{0x97ab1095, 0x0, 0x0, 0x80070000}};
  s21_decimal dec_check = {{0xc6f341a9, 0x2f3514bc, 0x649b3afd, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_4) {
  s21_decimal dec_1 = {{0x6dd20f9b, 0x1e78fa98, 0x2f, 0x70000}};
  s21_decimal dec_2 = {{0x12c3d8f, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x554e6ab8, 0x9407849e, 0x8ebbe507, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_5) {
  s21_decimal dec_1 = {{0xcb4b62ab, 0x420bb7, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0xe0451b30, 0x90c4f9db, 0x861, 0x800a0000}};
  s21_decimal dec_check = {{0xd7bcfb9c, 0xd6e67de3, 0x97c4eb96, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_6) {
  s21_decimal dec_1 = {{0x78c4ccbf, 0x7421e115, 0x2, 0xc0000}};
  s21_decimal dec_2 = {{0x1a, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0xb88f59b1, 0xa5c084cb, 0x383fd91c, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_7) {
  s21_decimal dec_1 = {{0x5428bfb2, 0xd6c7, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x30e5d29d, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xc9028116, 0x197f3698, 0x5d03446d, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_9) {
  s21_decimal dec_1 = {{0xb8aa3d5c, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x9b184190, 0x1, 0x0, 0x0}};
  s21_decimal dec_check = {{0x5a5a7c08, 0x6c585c7, 0x22a2cd1d, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_10) {
  s21_decimal dec_1 = {{0x927faf9b, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal dec_2 = {{0xb9f46eae, 0x51b3a87d, 0x1, 0x80000000}};
  s21_decimal dec_check = {{0x8163c7c2, 0x7638bc28, 0x6933e382, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_11) {
  s21_decimal dec_1 = {{0x84cd311f, 0x91be2f56, 0xb1c1e, 0x80000000}};
  s21_decimal dec_2 = {{0xd5939dae, 0x4f2d3595, 0xcd9f1f4b, 0x90000}};
  s21_decimal dec_check = {{0xc69067c9, 0x3a9a432a, 0x44323447, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_13) {
  s21_decimal dec_1 = {{0x7bae110d, 0x12d469, 0x0, 0x60000}};
  s21_decimal dec_2 = {{0x5232f10d, 0x2, 0x0, 0x80040000}};
  s21_decimal dec_check = {{0x317d0477, 0x518186c1, 0xabc9b3ac, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_14) {
  s21_decimal dec_1 = {{0xea79151a, 0x432a87ae, 0x755e, 0x0}};
  s21_decimal dec_2 = {{0x717e, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x74e1de4b, 0xaefe8ecd, 0x3da3e99d, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_15) {
  s21_decimal dec_1 = {{0x711f56c8, 0x11c7, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xedf56, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0xe00545f3, 0xc4786c89, 0x40ce103c, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_16) {
  s21_decimal dec_1 = {{0x38312240, 0xf0e5ed17, 0xa, 0x80020000}};
  s21_decimal dec_2 = {{0x811bbf47, 0xad4fc, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0xe7edca3c, 0x5714c42c, 0xd5e3c43b, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_18) {
  s21_decimal dec_1 = {{0x25443b2, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xa77eec45, 0x16c54597, 0x493e, 0x80150000}};
  s21_decimal dec_check = {{0x4ef73632, 0xcbabb838, 0x24815cab, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_19) {
  s21_decimal dec_1 = {{0xffffffff, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal dec_2 = {{0xa77eec45, 0x0, 0x0, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 2);
}
END_TEST

START_TEST(s21_div_20) {
  s21_decimal dec_1 = {{0x37038b5a, 0x33cb815d, 0x319a6, 0x80000000}};
  s21_decimal dec_2 = {{0xa8, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x6450e4a2, 0xedb4dc56, 0x4815868b, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_21) {
  s21_decimal dec_1 = {{0x13f98562, 0x3f1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x369bf, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x96e90e2f, 0xadb0cec9, 0x3e9b46ed, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_22) {
  s21_decimal dec_1 = {{0xd157dbd3, 0xee26e8, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xb4663282, 0xb0255967, 0x6a, 0x800b0000}};
  s21_decimal dec_check = {{0xc80e6fd, 0xa89a4951, 0x6e0eaa6f, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_23) {
  s21_decimal dec_1 = {{0xc0f8a5d9, 0x53f5f67d, 0xdd8, 0x80000000}};
  s21_decimal dec_2 = {{0x5ccd54e3, 0xa0468e9c, 0x24c9, 0x60000}};
  s21_decimal dec_check = {{0x4cea93b7, 0x9e103d7a, 0x799afb21, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_24) {
  s21_decimal dec_1 = {{0x88ea96, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xacd2b, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x63ac3a56, 0x5c5d676c, 0x28f52316, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_25) {
  s21_decimal dec_1 = {{0x1b3074dd, 0x0, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0x56e5a5e, 0x0, 0x0, 0x80080000}};
  s21_decimal dec_check = {{0x714f5a1e, 0x7d50b968, 0xa1c2bd7b, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_26) {
  s21_decimal dec_1 = {{0xe006cebc, 0x899, 0x0, 0x80070000}};
  s21_decimal dec_2 = {{0xa546d59, 0x0, 0x0, 0x80060000}};
  s21_decimal dec_check = {{0x971fdda4, 0xed6d2ed6, 0xb051e679, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_27) {
  s21_decimal dec_1 = {{0xe6008429, 0x1, 0x0, 0x80010000}};
  s21_decimal dec_2 = {{0xc15c0a26, 0x18a10, 0x0, 0xc0000}};
  s21_decimal dec_check = {{0x227336be, 0x4c83c927, 0x3cce7837, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_28) {
  s21_decimal dec_1 = {{0x3908fc6, 0xbf58d60d, 0x1ebc0df1, 0x80000000}};
  s21_decimal dec_2 = {{0x85fdf32b, 0xf99bf2b0, 0x83523506, 0x80070000}};
  s21_decimal dec_check = {{0xb62ea281, 0x62958203, 0x4b9f74cf, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_29) {
  s21_decimal dec_1 = {{0xc35d854a, 0x2c20694, 0x7cb4, 0x150000}};
  s21_decimal dec_2 = {{0x10b, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x682532d1, 0x32ca7eff, 0x4744429a, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_30) {
  s21_decimal dec_1 = {{0x242e618f, 0x81e3bb1e, 0x135dd, 0x10000}};
  s21_decimal dec_2 = {{0x70c5c9a1, 0x75d1de27, 0x9b3, 0x0}};
  s21_decimal dec_check = {{0xc67c6f2b, 0x3260811c, 0x67356909, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_31) {
  s21_decimal dec_1 = {{0xb624609e, 0x96262555, 0xe, 0xf0000}};
  s21_decimal dec_2 = {{0x1092, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xdec57439, 0x787c765e, 0xccf4cb52, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_32) {
  s21_decimal dec_1 = {{0x92229392, 0x1317f1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x96c32a, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xad432c87, 0x6dbabd15, 0xafc1e2e1, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_33) {
  s21_decimal dec_1 = {{0x19ec, 0x0, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0xf9de904, 0x0, 0x0, 0x90000}};
  s21_decimal dec_check = {{0x585c6142, 0x5876a01c, 0x51d67827, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_34) {
  s21_decimal dec_1 = {{0x78d994a5, 0x978dbaf5, 0x124d81ec, 0x80000000}};
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 3);
}
END_TEST

START_TEST(s21_div_35) {
  s21_decimal dec_1 = {{0x6ec49c70, 0x7ef0ede0, 0xc38c8c9, 0xc0000}};
  s21_decimal dec_2 = {{0xb51c8dad, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x76ab8292, 0xf2cfbd86, 0x2838f956, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_36) {
  s21_decimal dec_1 = {{0xcc49293c, 0xa1b057ad, 0x2a, 0x0}};
  s21_decimal dec_2 = {{0x4d32192c, 0x3e30bbe7, 0x20303ec, 0x80160000}};
  s21_decimal dec_check = {{0xf2248cf3, 0xaed50a6c, 0x28cff803, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_37) {
  s21_decimal dec_1 = {{0x113dbf6b, 0xb30a40d0, 0xe, 0x80060000}};
  s21_decimal dec_2 = {{0x1559c, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x5fb3834c, 0xd52d4cd, 0x642fbee5, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_38) {
  s21_decimal dec_1 = {{0x726a34c3, 0x1899c84, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x145fbfd3, 0x105a8955, 0xd275, 0x130000}};
  s21_decimal dec_check = {{0x4642bfe7, 0xc93e7a3b, 0x2405215c, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_39) {
  s21_decimal dec_1 = {{0xb09156b, 0x51825203, 0x24, 0x0}};
  s21_decimal dec_2 = {{0x4e63adad, 0x1cf30, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xdacc5168, 0x2a54d160, 0x2a818116, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_40) {
  s21_decimal dec_1 = {{0x7aa2a02b, 0x349a, 0x0, 0x50000}};
  s21_decimal dec_2 = {{0x1618, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x70c653d3, 0xd4ddce99, 0x210ab967, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_41) {
  s21_decimal dec_1 = {{0xec492d8a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal dec_2 = {{0x35d6a05a, 0x3a39e9e7, 0x169, 0x80000000}};
  s21_decimal dec_check = {{0x2a3e0d5c, 0xb65f3ebd, 0x266b1d95, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_42) {
  s21_decimal dec_1 = {{0xcb478ff5, 0xe461, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x9bc0d7c4, 0xff, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x98cee0d1, 0x2c961da, 0x49e84218, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_43) {
  s21_decimal dec_1 = {{0xc80ccd99, 0x88d8e279, 0x1b, 0x0}};
  s21_decimal dec_2 = {{0xfa9230c, 0x112f3d37, 0x1, 0x80130000}};
  s21_decimal dec_check = {{0x655f0d65, 0xc4b17bb9, 0x535f568f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_44) {
  s21_decimal dec_1 = {{0x2407cc82, 0x3e1ecc1a, 0x47, 0x80000000}};
  s21_decimal dec_2 = {{0xe5a370f6, 0xf376bfb0, 0xe11, 0x20000}};
  s21_decimal dec_check = {{0x6351ac72, 0xb333d517, 0x3fe8baa5, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_45) {
  s21_decimal dec_1 = {{0x8e38d0b9, 0x2365323, 0x4, 0x80000000}};
  s21_decimal dec_2 = {{0xaac981c7, 0x1, 0x0, 0x0}};
  s21_decimal dec_check = {{0x8cf1b5b4, 0x60dff304, 0x215e856a, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_47) {
  s21_decimal dec_1 = {{0xddbe4258, 0xa4379716, 0x1f863fa, 0x80080000}};
  s21_decimal dec_2 = {{0xe1acbd95, 0x51dc, 0x0, 0x50000}};
  s21_decimal dec_check = {{0xbb71caf0, 0xfab8644b, 0xdae5b6f4, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_48) {
  s21_decimal dec_1 = {{0xd4161494, 0xd1bd307e, 0x51478c, 0x80080000}};
  s21_decimal dec_2 = {{0x881cd077, 0xe2692, 0x0, 0x80030000}};
  s21_decimal dec_check = {{0x7ae75c46, 0xd0090667, 0x4fb64a98, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_49) {
  s21_decimal dec_1 = {{0xa8570325, 0x3818602, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x4da5ff86, 0x1, 0x0, 0x80060000}};
  s21_decimal dec_check = {{0x565058e6, 0x207c02eb, 0x91d3a1c4, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_50) {
  s21_decimal dec_1 = {{0xf4972658, 0x9f23459e, 0x30922e1, 0x80000000}};
  s21_decimal dec_2 = {{0x4ec6b1b7, 0x9fd322a, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x1365cfae, 0x77b13b4d, 0x2a2cc20f, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_51) {
  s21_decimal dec_1 = {{0x7f04e33f, 0x85a3b880, 0x423, 0x60000}};
  s21_decimal dec_2 = {{0xbc5c519c, 0x9c, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x90ee327d, 0xeb0832b3, 0x5dd01350, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_52) {
  s21_decimal dec_1 = {{0xdd9ca7b3, 0x672, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x385609ef, 0x343, 0x0, 0x0}};
  s21_decimal dec_check = {{0xef7368cb, 0xce82f58d, 0x3fddc079, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_53) {
  s21_decimal dec_1 = {{0x6e21cc09, 0x2811, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x6ee09b3c, 0xeac9827c, 0x3f6, 0x150000}};
  s21_decimal dec_check = {{0x2d4a4f6a, 0x1da222b8, 0x4c08bbdf, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_54) {
  s21_decimal dec_1 = {{0x3c12d0ca, 0x3f291, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x55424d2, 0x0, 0x0, 0x80060000}};
  s21_decimal dec_check = {{0x8f367837, 0x47820cd1, 0x2828c33a, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_55) {
  s21_decimal dec_1 = {{0x2e6a3f6a, 0x10, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xcfd2ed05, 0x30b, 0x0, 0x800d0000}};
  s21_decimal dec_check = {{0x19fa83ca, 0x4e97445a, 0x430c396b, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_57) {
  s21_decimal dec_1 = {{0xfae8dd78, 0xab1deb9, 0x1309b7, 0x80000000}};
  s21_decimal dec_2 = {{0x6c0ad1c9, 0x61c3aa69, 0x1c25c, 0x0}};
  s21_decimal dec_check = {{0xe37f7f6f, 0xe7f212ee, 0x22f7952e, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_59) {
  s21_decimal dec_1 = {{0x9fcc2ad3, 0x4c9b4c95, 0x16b387, 0x0}};
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x90cf33cc, 0x29271085, 0x6287a5e7, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_60) {
  s21_decimal dec_1 = {{0x3d9, 0x0, 0x0, 0x80010000}};
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xc1555555, 0x7f3dc7cf, 0x6a1718c6, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_61) {
  s21_decimal dec_1 = {{0xdc21, 0x0, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0x3e80ad, 0x0, 0x0, 0x80070000}};
  s21_decimal dec_check = {{0xe7a1e95, 0x563569b8, 0x2c73eac5, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_64) {
  s21_decimal dec_1 = {{0x7117d068, 0xfdbf51ea, 0x21a74, 0x80040000}};
  s21_decimal dec_2 = {{0x311267e4, 0x2, 0x0, 0x0}};
  s21_decimal dec_check = {{0xf47330ae, 0xac30b721, 0x57489a6a, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_65) {
  s21_decimal dec_1 = {{0xde2993ac, 0x3b94469e, 0x2e, 0x80000000}};
  s21_decimal dec_2 = {{0x43a9ed36, 0x6ab62e80, 0x2, 0x80000000}};
  s21_decimal dec_check = {{0x9cd78aa, 0xe6f60cca, 0x3dcf76db, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_66) {
  s21_decimal dec_1 = {{0xf05e6, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x186b, 0x0, 0x0, 0x40000}};
  s21_decimal dec_check = {{0x24cf8d54, 0x3c09d7be, 0x32e45383, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_67) {
  s21_decimal dec_1 = {{0x3607f, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0xe6c77e7c, 0x0, 0x0, 0x80070000}};
  s21_decimal dec_check = {{0xfc68d99d, 0x36dfe891, 0xb8b0ffe2, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_68) {
  s21_decimal dec_1 = {{0xa4e9994a, 0x4d, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x218e, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0x4d3c7f9, 0xafcd2fe9, 0x7d70a3ba, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_69) {
  s21_decimal dec_1 = {{0x84cbeaec, 0x63f57464, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xabfc25b9, 0xd9, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xb453dce8, 0x5b22d77f, 0xf8f14b42, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_70) {
  s21_decimal dec_1 = {{0xf53f6a87, 0x2bd76e6a, 0x5fa93be, 0x0}};
  s21_decimal dec_2 = {{0x890c57fd, 0xe8, 0x0, 0x10000}};
  s21_decimal dec_check = {{0xafe8bcd0, 0x334ad28a, 0x3bdd354a, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_71) {
  s21_decimal dec_1 = {{0x2c434a93, 0x2, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x31e, 0x0, 0x0, 0x30000}};
  s21_decimal dec_check = {{0xdefc1c3b, 0xadaf965f, 0x25c9ce8f, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_72) {
  s21_decimal dec_1 = {{0xa5255a28, 0x143d57, 0x0, 0x80040000}};
  s21_decimal dec_2 = {{0x56124cf, 0x0, 0x0, 0x80000}};
  s21_decimal dec_check = {{0x2aa0769d, 0x10265df0, 0xcbf58d8f, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_73) {
  s21_decimal dec_1 = {{0x14954298, 0x18509, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x89ad9f51, 0x1, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0x2bee0ab9, 0x5b6910f0, 0xd142cbb7, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_74) {
  s21_decimal dec_1 = {{0xe50e277f, 0x37d6f3, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xf4812a7b, 0x612, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x46fbe3f1, 0x85fe3437, 0x4c0b469f, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_75) {
  s21_decimal dec_1 = {{0xc3289774, 0x23f1231e, 0xcd, 0x80000}};
  s21_decimal dec_2 = {{0x41dea0e0, 0xb, 0x0, 0x80080000}};
  s21_decimal dec_check = {{0x43068aea, 0xb0f49e0b, 0xfce4a5a3, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_76) {
  s21_decimal dec_1 = {{0xaa4b41e0, 0x43f, 0x0, 0x30000}};
  s21_decimal dec_2 = {{0x1093252a, 0x8e7, 0x0, 0x80060000}};
  s21_decimal dec_check = {{0x466d5b1f, 0x4021566b, 0x9a348687, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_77) {
  s21_decimal dec_1 = {{0x4d33dffb, 0x8a4, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x12029589, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x40c2180f, 0x690c16db, 0x659bb1f4, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_79) {
  s21_decimal dec_1 = {{0x8e08bcf2, 0x9684a963, 0x71892, 0x60000}};
  s21_decimal dec_2 = {{0x29dba1b, 0x0, 0x0, 0x70000}};
  s21_decimal dec_check = {{0x595b443e, 0xbcab641e, 0x3f2735b5, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_80) {
  s21_decimal dec_1 = {{0xc95ddc77, 0x5b778fa, 0x1834f20, 0x80000000}};
  s21_decimal dec_2 = {{0xaa2e20f3, 0x8702917, 0x0, 0x80010000}};
  s21_decimal dec_check = {{0xa1f4a97c, 0x7145b271, 0xf8d2e3e0, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_81) {
  s21_decimal dec_1 = {{0x946f9d97, 0x6dd7995b, 0x4d9ae299, 0x0}};
  s21_decimal dec_2 = {{0x5d0f9e68, 0x54f, 0x0, 0x0}};
  s21_decimal dec_check = {{0xb755a682, 0xb493b624, 0x84ebd593, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_82) {
  s21_decimal dec_1 = {{0xadf34f33, 0x44fa99a, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x76db77, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x6a71e021, 0xdbed9a60, 0x80dd1e10, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_83) {
  s21_decimal dec_1 = {{0x1cd00bd6, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x16c4c94, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x5d90d8, 0x29c3db83, 0x416c1c80, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_84) {
  s21_decimal dec_1 = {{0x1f1f9bc3, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x5d5da552, 0x72, 0x0, 0x60000}};
  s21_decimal dec_check = {{0x14f0d017, 0x9aa9f1ed, 0x225963ff, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_85) {
  s21_decimal dec_1 = {{0x912b0f66, 0xab07d7bc, 0x1a, 0x0}};
  s21_decimal dec_2 = {{0x10b3, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x9731762d, 0xcfa6e6ce, 0x252ea915, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_86) {
  s21_decimal dec_1 = {{0x34bfb74d, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x5c337ae6, 0xde1624a5, 0x20, 0x800e0000}};
  s21_decimal dec_check = {{0x4c7b8d40, 0xe163a1a8, 0x2f29e133, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_87) {
  s21_decimal dec_1 = {{0xaa382780, 0x7797aed2, 0x12bd1db7, 0x0}};
  s21_decimal dec_2 = {{0x7cee07d0, 0x8ebea2, 0x0, 0x70000}};
  s21_decimal dec_check = {{0x44fe648c, 0xb01b037e, 0x2ea3589e, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_88) {
  s21_decimal dec_1 = {{0xe8fbd6fa, 0xc98adc20, 0x1, 0x0}};
  s21_decimal dec_2 = {{0xf37a6d93, 0x193c9e, 0x0, 0x0}};
  s21_decimal dec_check = {{0xd553e1bc, 0xfb70eac9, 0x95f7b427, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_89) {
  s21_decimal dec_1 = {{0x97e74253, 0x163d5d, 0x0, 0x90000}};
  s21_decimal dec_2 = {{0x798e424a, 0x4090c9c4, 0xa50, 0x80160000}};
  s21_decimal dec_check = {{0xa19bb8dc, 0x7591c072, 0x2987bbf2, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_90) {
  s21_decimal dec_1 = {{0x96739434, 0x762c8d7d, 0x6376f, 0x80000000}};
  s21_decimal dec_2 = {{0xd7e414a2, 0x26f11dd4, 0x1, 0x80000}};
  s21_decimal dec_check = {{0xfe4023c7, 0xdfbd1310, 0x724278c1, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_91) {
  s21_decimal dec_1 = {{0xd520473b, 0xe84c79, 0x1d, 0x0}};
  s21_decimal dec_2 = {{0x35797986, 0xf9ff9c52, 0x724, 0x80050000}};
  s21_decimal dec_check = {{0x2665a070, 0x3f956355, 0x333d43c9, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_93) {
  s21_decimal dec_1 = {{0x79dc977c, 0xcbf8cc4, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x11f4, 0x0, 0x0, 0x80040000}};
  s21_decimal dec_check = {{0x64a7ef75, 0xdad18cf1, 0x4094f365, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_94) {
  s21_decimal dec_1 = {{0x473a4223, 0x11, 0x0, 0x800a0000}};
  s21_decimal dec_2 = {{0x35b68511, 0x1, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0x5464748c, 0xe7fe854e, 0x2e258b86, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_95) {
  s21_decimal dec_1 = {{0x7f1180d8, 0xb01bf471, 0x18c1f3a5, 0x80000000}};
  s21_decimal dec_2 = {{0x36, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0x40a5277d, 0x2033c4ac, 0x2dd8f29b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_96) {
  s21_decimal dec_1 = {{0x570da04a, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xbaae, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0xd1280ab7, 0xf412e01d, 0x26e9f555, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_97) {
  s21_decimal dec_1 = {{0xa74e002f, 0xfb626d66, 0x3, 0x80000000}};
  s21_decimal dec_2 = {{0x9c045b68, 0x0, 0x0, 0x80030000}};
  s21_decimal dec_check = {{0x84e82139, 0x21df4394, 0x5aacbb45, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_99) {
  s21_decimal dec_1 = {{0x7ba7b016, 0x9ff04b34, 0x32f0713, 0x80000000}};
  s21_decimal dec_2 = {{0xf659e22c, 0x556b, 0x0, 0x0}};
  s21_decimal dec_check = {{0xaf59ec03, 0x89b57f7b, 0x21e5b0ca, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

Suite *s21_div_cases(void) {
  Suite *c = suite_create("s21_div_cases");
  TCase *tc = tcase_create("s21_div_tc");

  tcase_add_test(tc, s21_div_1);
  tcase_add_test(tc, s21_div_2);
  tcase_add_test(tc, s21_div_3);
  tcase_add_test(tc, s21_div_4);
  tcase_add_test(tc, s21_div_5);
  tcase_add_test(tc, s21_div_6);
  tcase_add_test(tc, s21_div_7);
  tcase_add_test(tc, s21_div_9);
  tcase_add_test(tc, s21_div_10);
  tcase_add_test(tc, s21_div_11);
  tcase_add_test(tc, s21_div_13);
  tcase_add_test(tc, s21_div_14);
  tcase_add_test(tc, s21_div_15);
  tcase_add_test(tc, s21_div_16);
  tcase_add_test(tc, s21_div_18);
  tcase_add_test(tc, s21_div_19);
  tcase_add_test(tc, s21_div_20);
  tcase_add_test(tc, s21_div_21);
  tcase_add_test(tc, s21_div_22);
  tcase_add_test(tc, s21_div_23);
  tcase_add_test(tc, s21_div_24);
  tcase_add_test(tc, s21_div_25);
  tcase_add_test(tc, s21_div_26);
  tcase_add_test(tc, s21_div_27);
  tcase_add_test(tc, s21_div_28);
  tcase_add_test(tc, s21_div_29);
  tcase_add_test(tc, s21_div_30);
  tcase_add_test(tc, s21_div_31);
  tcase_add_test(tc, s21_div_32);
  tcase_add_test(tc, s21_div_33);
  tcase_add_test(tc, s21_div_34);
  tcase_add_test(tc, s21_div_35);
  tcase_add_test(tc, s21_div_36);
  tcase_add_test(tc, s21_div_37);
  tcase_add_test(tc, s21_div_38);
  tcase_add_test(tc, s21_div_39);
  tcase_add_test(tc, s21_div_40);
  tcase_add_test(tc, s21_div_41);
  tcase_add_test(tc, s21_div_42);
  tcase_add_test(tc, s21_div_43);
  tcase_add_test(tc, s21_div_44);
  tcase_add_test(tc, s21_div_45);
  tcase_add_test(tc, s21_div_47);
  tcase_add_test(tc, s21_div_48);
  tcase_add_test(tc, s21_div_49);
  tcase_add_test(tc, s21_div_50);
  tcase_add_test(tc, s21_div_51);
  tcase_add_test(tc, s21_div_52);
  tcase_add_test(tc, s21_div_53);
  tcase_add_test(tc, s21_div_54);
  tcase_add_test(tc, s21_div_55);
  tcase_add_test(tc, s21_div_57);
  tcase_add_test(tc, s21_div_59);
  tcase_add_test(tc, s21_div_60);
  tcase_add_test(tc, s21_div_61);
  tcase_add_test(tc, s21_div_64);
  tcase_add_test(tc, s21_div_65);
  tcase_add_test(tc, s21_div_66);
  tcase_add_test(tc, s21_div_67);
  tcase_add_test(tc, s21_div_68);
  tcase_add_test(tc, s21_div_69);
  tcase_add_test(tc, s21_div_70);
  tcase_add_test(tc, s21_div_71);
  tcase_add_test(tc, s21_div_72);
  tcase_add_test(tc, s21_div_73);
  tcase_add_test(tc, s21_div_74);
  tcase_add_test(tc, s21_div_75);
  tcase_add_test(tc, s21_div_76);
  tcase_add_test(tc, s21_div_77);
  tcase_add_test(tc, s21_div_79);
  tcase_add_test(tc, s21_div_80);
  tcase_add_test(tc, s21_div_81);
  tcase_add_test(tc, s21_div_82);
  tcase_add_test(tc, s21_div_83);
  tcase_add_test(tc, s21_div_84);
  tcase_add_test(tc, s21_div_85);
  tcase_add_test(tc, s21_div_86);
  tcase_add_test(tc, s21_div_87);
  tcase_add_test(tc, s21_div_88);
  tcase_add_test(tc, s21_div_89);
  tcase_add_test(tc, s21_div_90);
  tcase_add_test(tc, s21_div_91);
  tcase_add_test(tc, s21_div_93);
  tcase_add_test(tc, s21_div_94);
  tcase_add_test(tc, s21_div_95);
  tcase_add_test(tc, s21_div_96);
  tcase_add_test(tc, s21_div_97);
  tcase_add_test(tc, s21_div_99);

  suite_add_tcase(c, tc);
  return c;
}
