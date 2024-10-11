#include "s21_test.h"

START_TEST(s21_add_1) {
  s21_decimal dec_1 = {{0xabb7e, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0xfcd42c, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x62cd9cae, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_2) {
  s21_decimal dec_1 = {{0x1b67377a, 0x2, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x35de1d9e, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xe58919dc, 0x1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_3) {
  s21_decimal dec_1 = {{0xe28b8553, 0xd60a49b0, 0x0, 0x90000}};
  s21_decimal dec_2 = {{0xdf572, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xd2cb7953, 0xd60d89b2, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_4) {
  s21_decimal dec_1 = {{0x3062beff, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x354d3f16, 0x217e7024, 0x139f, 0x30000}};
  s21_decimal dec_check = {{0x33932afe, 0x217e6f67, 0x139f, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_5) {
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xfa1b279c, 0x51998768, 0x3b67, 0x0}};
  s21_decimal dec_check = {{0xfa1b2796, 0x51998768, 0x3b67, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_6) {
  s21_decimal dec_1 = {{0xb4acb6ad, 0xb12b5f4, 0x0, 0xa0000}};
  s21_decimal dec_2 = {{0xe06150e2, 0x1, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0x950e078f, 0xb12b5f6, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_7) {
  s21_decimal dec_1 = {{0x3caa6d91, 0x2dd50658, 0x8aab3, 0x20000}};
  s21_decimal dec_2 = {{0x90e6e0c, 0x18c07058, 0x0, 0x80010000}};
  s21_decimal dec_check = {{0xe21a2119, 0x3650a2e7, 0x8aab2, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_8) {
  s21_decimal dec_1 = {{0xcd95f4da, 0x436, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x4566cd60, 0xc2, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x12fcc23a, 0x4f9, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_9) {
  s21_decimal dec_1 = {{0xcb8808bb, 0xcf6bdff, 0x31, 0x800c0000}};
  s21_decimal dec_2 = {{0x160, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x2e7e08bb, 0xcf7fe24, 0x31, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_10) {
  s21_decimal dec_1 = {{0xeb5c0ec0, 0x3282592d, 0x1242a8e3, 0x80000000}};
  s21_decimal dec_2 = {{0x995a8b31, 0xfac53bc2, 0x2b4e7d, 0x0}};
  s21_decimal dec_check = {{0x5201838f, 0x37bd1d6b, 0x12175a65, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_11) {
  s21_decimal dec_1 = {{0x326a8111, 0xbc7748f3, 0x0, 0x80040000}};
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0x326a710d, 0xbc7748f3, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_12) {
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xcb65a81, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xcb65a81, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_13) {
  s21_decimal dec_1 = {{0xa877d928, 0x60f2ad31, 0x1c330a, 0x80000000}};
  s21_decimal dec_2 = {{0x547264b3, 0x87b065d9, 0x0, 0x70000}};
  s21_decimal dec_check = {{0x9f2eb4d4, 0xb3f110b9, 0x6e27608a, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_14) {
  s21_decimal dec_1 = {{0xab97997f, 0x89e9f9a7, 0x4, 0x80000000}};
  s21_decimal dec_2 = {{0x6358a2, 0x0, 0x0, 0x70000}};
  s21_decimal dec_check = {{0xc2c1d0de, 0x48d2f463, 0x2b48e00, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_15) {
  s21_decimal dec_1 = {{0x4da1ed95, 0x4a49e9d9, 0xc2e8, 0xf0000}};
  s21_decimal dec_2 = {{0xd97d956e, 0x8c15f4a5, 0x3c6bf3, 0x80000000}};
  s21_decimal dec_check = {{0x45029727, 0x35c3a703, 0xec05af5b, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_16) {
  s21_decimal dec_1 = {{0x53761725, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xe4f5bac5, 0x253, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x386bd1ea, 0x254, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_17) {
  s21_decimal dec_1 = {{0xcde41144, 0x4af673ef, 0x0, 0xe0000}};
  s21_decimal dec_2 = {{0x24c67407, 0x5667, 0x0, 0x0}};
  s21_decimal dec_check = {{0x263bd144, 0xad2ec39a, 0x1eb24c65, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_18) {
  s21_decimal dec_1 = {{0x8c4303ba, 0x87c5b16e, 0x22, 0x0}};
  s21_decimal dec_2 = {{0x89, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x8c430331, 0x87c5b16e, 0x22, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_19) {
  s21_decimal dec_1 = {{0xef7930d6, 0x744f4600, 0x3, 0x20000}};
  s21_decimal dec_2 = {{0xe3d59b39, 0xf1374dd1, 0x6, 0x50000}};
  s21_decimal dec_check = {{0x553c5f29, 0x46e0c179, 0xd85, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_20) {
  s21_decimal dec_1 = {{0xce2c50be, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal dec_2 = {{0x80f7c37d, 0x7f14bba3, 0xa366868, 0x0}};
  s21_decimal dec_check = {{0x4d348d41, 0x80eb445c, 0xf5c99797, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_21) {
  s21_decimal dec_1 = {{0x93339df9, 0x8a6be55f, 0x0, 0xf0000}};
  s21_decimal dec_2 = {{0x127af, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xcdfde207, 0x900ec413, 0x3, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_22) {
  s21_decimal dec_1 = {{0x774397f9, 0x27c52149, 0x1, 0xf0000}};
  s21_decimal dec_2 = {{0x84e2d111, 0x1985d500, 0xeda445, 0x0}};
  s21_decimal dec_check = {{0xe8ba2fd4, 0xf8473433, 0x5cd42afd, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_23) {
  s21_decimal dec_1 = {{0x34d4c26d, 0x2ecbae7, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xec3639d7, 0x28d, 0x0, 0x40000}};
  s21_decimal dec_check = {{0xa320fba7, 0x3f44ea0d, 0x72, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_24) {
  s21_decimal dec_1 = {{0xf162b, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0x8dd8bae0, 0x78, 0x0, 0x0}};
  s21_decimal dec_check = {{0x8a8662eb, 0x4b5, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_25) {
  s21_decimal dec_1 = {{0x25d3be26, 0x59d963a9, 0x20, 0x80000000}};
  s21_decimal dec_2 = {{0x58664560, 0x14, 0x0, 0x90000}};
  s21_decimal dec_check = {{0xc9a65f10, 0xbf360098, 0xc0d3aaf6, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_26) {
  s21_decimal dec_1 = {{0x208e08b7, 0x2, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x614328d6, 0xf7851ba7, 0x1, 0x80000000}};
  s21_decimal dec_check = {{0x81d1318d, 0xf7851ba9, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_27) {
  s21_decimal dec_1 = {{0x97fe669d, 0x13a71, 0x0, 0xc0000}};
  s21_decimal dec_2 = {{0x45a60041, 0x6cda16ff, 0x1, 0x110000}};
  s21_decimal dec_check = {{0xd4f95061, 0x4ca7ab8b, 0x3, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_28) {
  s21_decimal dec_1 = {{0x1835fa2e, 0x1e7be3, 0x0, 0x80000}};
  s21_decimal dec_2 = {{0x17e8a, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x347f442e, 0x1e84cb, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_29) {
  s21_decimal dec_1 = {{0x71350bdd, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x95854c31, 0xf34a8f87, 0x4f353, 0x0}};
  s21_decimal dec_check = {{0x24504054, 0xf34a8f86, 0x4f353, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_30) {
  s21_decimal dec_1 = {{0x2235, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0x21db, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_31) {
  s21_decimal dec_1 = {{0xcd563f86, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x3d9e, 0x0, 0x0, 0x80030000}};
  s21_decimal dec_check = {{0x18e7e5d2, 0x322, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_32) {
  s21_decimal dec_1 = {{0x106e3bb5, 0x675, 0x0, 0x40000}};
  s21_decimal dec_2 = {{0xf0e0e, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xc45938d5, 0x672, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_33) {
  s21_decimal dec_1 = {{0x89a0f11, 0x49fbf02c, 0x0, 0x800c0000}};
  s21_decimal dec_2 = {{0xf0be69f8, 0x96, 0x0, 0x0}};
  s21_decimal dec_check = {{0x8add70ef, 0x4344621b, 0x8947, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_34) {
  s21_decimal dec_1 = {{0x39, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xcd3ba8c0, 0xedb15cec, 0x10a2, 0xf0000}};
  s21_decimal dec_check = {{0x7d6e28c0, 0xee7bde1f, 0x10a2, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_35) {
  s21_decimal dec_1 = {{0xf1c8305c, 0xc007cce, 0x1dd13fa5, 0x801c0000}};
  s21_decimal dec_2 = {{0xb77, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xead98b50, 0xb41a30d5, 0x5edd625c, 0x80190000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_36) {
  s21_decimal dec_1 = {{0xf93, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x5863008f, 0x700, 0x0, 0x0}};
  s21_decimal dec_check = {{0x58631022, 0x700, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_37) {
  s21_decimal dec_1 = {{0xde13acdb, 0x750ea151, 0x1, 0x0}};
  s21_decimal dec_2 = {{0x911e42af, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x4cf56a2c, 0x750ea150, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_38) {
  s21_decimal dec_1 = {{0x50ee87, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x5e4cd4bb, 0x41df16d, 0x54484e8e, 0x180000}};
  s21_decimal dec_check = {{0xcaeed92b, 0x213ac09f, 0xac38f386, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_39) {
  s21_decimal dec_1 = {{0xd336ef7f, 0x6812db9b, 0x0, 0xe0000}};
  s21_decimal dec_2 = {{0x24cdd50b, 0x75, 0x0, 0xc0000}};
  s21_decimal dec_check = {{0x339e27cb, 0x6813095e, 0x0, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_40) {
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80010000}};
  s21_decimal dec_2 = {{0xafeab06, 0x2, 0x0, 0x0}};
  s21_decimal dec_check = {{0x6df2ae37, 0x14, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_41) {
  s21_decimal dec_1 = {{0x1c2f, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x59b, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x21ca, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_42) {
  s21_decimal dec_1 = {{0x37221a2c, 0x892e3d3f, 0x471fcf, 0x80000000}};
  s21_decimal dec_2 = {{0x109d2103, 0xf86a62, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x47bf3b2f, 0x8a26a7a1, 0x471fcf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_43) {
  s21_decimal dec_1 = {{0xf32398d6, 0xbd78d4, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x6a47914d, 0x5be0f, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0xe798294d, 0xb6d8b8f4, 0x1b9261c, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_44) {
  s21_decimal dec_1 = {{0xe42c22c5, 0x994cf5eb, 0x131c0971, 0x80120000}};
  s21_decimal dec_2 = {{0xcfdda87, 0xe1c549ad, 0x17, 0x80000000}};
  s21_decimal dec_check = {{0xd86bd176, 0x51d499c6, 0x8e58e9ae, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_45) {
  s21_decimal dec_1 = {{0x299b8a4c, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xc3952, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x298f50fa, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_46) {
  s21_decimal dec_1 = {{0xaeb2c46, 0x51900f6, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0xd03a512e, 0x89635087, 0x0, 0x90000}};
  s21_decimal dec_check = {{0x5b51782e, 0x4e8a7195, 0x309d8, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_47) {
  s21_decimal dec_1 = {{0x355, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0xd4e765d5, 0x1d2111, 0x0, 0x0}};
  s21_decimal dec_check = {{0x2a63c3df, 0xb60eaf7, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_48) {
  s21_decimal dec_1 = {{0x1eff63c6, 0x5c, 0x0, 0x80080000}};
  s21_decimal dec_2 = {{0x735d43, 0x0, 0x0, 0x40000}};
  s21_decimal dec_check = {{0x84945a96, 0x4a, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_49) {
  s21_decimal dec_1 = {{0x720e195, 0x0, 0x0, 0x80070000}};
  s21_decimal dec_2 = {{0x3a7798c5, 0x4b75, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xb68b215, 0xf9f721e2, 0x2c, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_50) {
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xee40de4f, 0x8577e8e9, 0x7d9d, 0x0}};
  s21_decimal dec_check = {{0xee40de53, 0x8577e8e9, 0x7d9d, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_51) {
  s21_decimal dec_1 = {{0x244a6cee, 0x1954fb, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x9f1e9e65, 0x169181, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xc3690b53, 0x2fe67c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_52) {
  s21_decimal dec_1 = {{0x63, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xaee5880b, 0x5a, 0x0, 0x80020000}};
  s21_decimal dec_check = {{0xaee5aeb7, 0x5a, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_53) {
  s21_decimal dec_1 = {{0xdd649b32, 0x18, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xa647d3f0, 0x36895f56, 0x1, 0x80000000}};
  s21_decimal dec_check = {{0xc8e338be, 0x36895f3d, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_54) {
  s21_decimal dec_1 = {{0x2c91881e, 0xf704, 0x0, 0x800b0000}};
  s21_decimal dec_2 = {{0x6874ad54, 0xe44b6777, 0x1296, 0x80130000}};
  s21_decimal dec_check = {{0x2bcd0b54, 0x39439193, 0x1857, 0x80130000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_55) {
  s21_decimal dec_1 = {{0xd3b7103f, 0xe933ad58, 0xe11ccef, 0x80120000}};
  s21_decimal dec_2 = {{0x6cc4dfdb, 0xbcad4cf5, 0x1, 0x800f0000}};
  s21_decimal dec_check = {{0xb4c17fb7, 0xee284c09, 0xe11d3b8, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_56) {
  s21_decimal dec_1 = {{0x276a79a8, 0x7, 0x0, 0x40000}};
  s21_decimal dec_2 = {{0x7952899a, 0x1de44463, 0x2f, 0x0}};
  s21_decimal dec_check = {{0x4f898948, 0xa4af6dba, 0x7307f, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_57) {
  s21_decimal dec_1 = {{0x26430ea, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x1ba33fd6, 0x2fd2a63d, 0xcf11eb56, 0x80000000}};
  s21_decimal dec_check = {{0x1e0770c0, 0x2fd2a63d, 0xcf11eb56, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_58) {
  s21_decimal dec_1 = {{0x915e477f, 0x43b221d3, 0xad798088, 0x0}};
  s21_decimal dec_2 = {{0x48a6ea44, 0x17d909, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x48b75d3b, 0x439a48ca, 0xad798088, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_59) {
  s21_decimal dec_1 = {{0x360cb421, 0x4aa7a35d, 0x580e1f13, 0x0}};
  s21_decimal dec_2 = {{0x96, 0x0, 0x0, 0x80030000}};
  s21_decimal dec_check = {{0x360cb421, 0x4aa7a35d, 0x580e1f13, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_60) {
  s21_decimal dec_1 = {{0xa371332f, 0x5c8, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x1c461360, 0xaccdfdd6, 0x2f94e0d6, 0x801b0000}};
  s21_decimal dec_check = {{0x4193ed00, 0x1e667423, 0xcd7ad838, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_61) {
  s21_decimal dec_1 = {{0x4fb90fab, 0x23b47cd3, 0xda09a75, 0x801c0000}};
  s21_decimal dec_2 = {{0xd497d2c7, 0x1a1, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0x9930ab5d, 0x8fd7dfe1, 0x39d96ee7, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_62) {
  s21_decimal dec_1 = {{0xcb917db, 0xf, 0x0, 0x80030000}};
  s21_decimal dec_2 = {{0xc02ab908, 0x12bd360, 0x0, 0x0}};
  s21_decimal dec_check = {{0x9a29af65, 0x9331b1df, 0x4, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_63) {
  s21_decimal dec_1 = {{0xf, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x1e41c198, 0xbc5abd7, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x1e41c1a7, 0xbc5abd7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_64) {
  s21_decimal dec_1 = {{0x2bd, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0x86b3156a, 0x7baea54, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x9df46025, 0x5038904, 0x3, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_65) {
  s21_decimal dec_1 = {{0x6470cf60, 0xcbf6ab7, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x1934dd52, 0x93, 0x0, 0x40000}};
  s21_decimal dec_check = {{0x8fd97352, 0xf5389c56, 0x1f1, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_66) {
  s21_decimal dec_1 = {{0xaafddf90, 0xff798743, 0xd94, 0x800c0000}};
  s21_decimal dec_2 = {{0x20fb964e, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x7952ff90, 0x13b3e3, 0xd77, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_67) {
  s21_decimal dec_1 = {{0x47ac81b9, 0x4220, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xbb691f86, 0x252846a0, 0x274d68b, 0x80120000}};
  s21_decimal dec_check = {{0x69a1c140, 0x3b7eb394, 0xeaecb3f7, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_68) {
  s21_decimal dec_1 = {{0x17853b7e, 0x223a163b, 0x13, 0x0}};
  s21_decimal dec_2 = {{0x14a9a, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x17868618, 0x223a163b, 0x13, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_69) {
  s21_decimal dec_1 = {{0x28887da4, 0x2, 0x0, 0x50000}};
  s21_decimal dec_2 = {{0x9b464, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xa65898dc, 0xc, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_70) {
  s21_decimal dec_1 = {{0x644ade, 0x0, 0x0, 0x50000}};
  s21_decimal dec_2 = {{0xe1ec38c7, 0x4, 0x0, 0x30000}};
  s21_decimal dec_check = {{0x40aa789a, 0x1e8, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_71) {
  s21_decimal dec_1 = {{0x1b275131, 0x4b5c1459, 0x8f2, 0x80010000}};
  s21_decimal dec_2 = {{0x50daf932, 0xa3, 0x0, 0x0}};
  s21_decimal dec_check = {{0xf299953d, 0x4b5c0df7, 0x8f2, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_72) {
  s21_decimal dec_1 = {{0x332a62c5, 0x1, 0x0, 0x80000}};
  s21_decimal dec_2 = {{0x10f84, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0x622a4bc5, 0x11, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_73) {
  s21_decimal dec_1 = {{0xcc0c293e, 0xf, 0x0, 0x800b0000}};
  s21_decimal dec_2 = {{0x83d024c9, 0x4b28, 0x0, 0x0}};
  s21_decimal dec_check = {{0x51effec2, 0x258f51bd, 0x6d5ea, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_74) {
  s21_decimal dec_1 = {{0x77bcabaa, 0x6c315d25, 0x3, 0x80120000}};
  s21_decimal dec_2 = {{0x426c24b0, 0x66eada7, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x6c53b4e3, 0x5addedea, 0x95c3b7b6, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_75) {
  s21_decimal dec_1 = {{0x91fa56be, 0x7d06cf4d, 0x30, 0x80000000}};
  s21_decimal dec_2 = {{0xc60db2df, 0x3a74, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x5808099d, 0x7d0709c2, 0x30, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_76) {
  s21_decimal dec_1 = {{0x1db, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x80010000}};
  s21_decimal dec_check = {{0x12da, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_78) {
  s21_decimal dec_1 = {{0xcfc04503, 0xc930d972, 0x2, 0x80000000}};
  s21_decimal dec_2 = {{0x7dac786f, 0x86a1076a, 0x7943, 0x80060000}};
  s21_decimal dec_check = {{0xab57f2f, 0x28a129f2, 0x2afbb1, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_79) {
  s21_decimal dec_1 = {{0xb2b5a5db, 0x7, 0x0, 0x800a0000}};
  s21_decimal dec_2 = {{0x3a1800b3, 0x65bf, 0x0, 0x0}};
  s21_decimal dec_check = {{0x719ac625, 0xed15b05e, 0xece5, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_80) {
  s21_decimal dec_1 = {{0xe89acd88, 0x5f, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xc26fd5e4, 0xb, 0x0, 0x80050000}};
  s21_decimal dec_check = {{0x736dcf1c, 0x925841, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_81) {
  s21_decimal dec_1 = {{0x2c049649, 0x461e, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x31e9b382, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xfa1ae2c7, 0x461d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_82) {
  s21_decimal dec_1 = {{0x1f04, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0x13628, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_83) {
  s21_decimal dec_1 = {{0xb35d8244, 0x8fd85, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xa40fdd75, 0x5d8f4255, 0x810dd, 0x0}};
  s21_decimal dec_check = {{0x576d5fb9, 0x5d983fdb, 0x810dd, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_84) {
  s21_decimal dec_1 = {{0x487b1c8, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0xa49d890, 0xc74b16d, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x625ac3d8, 0x7c8eee42, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_85) {
  s21_decimal dec_1 = {{0xdf1f0, 0x0, 0x0, 0x80050000}};
  s21_decimal dec_2 = {{0x57c26213, 0x70a52f4b, 0x19b4496e, 0x180000}};
  s21_decimal dec_check = {{0xa6426213, 0x16c2146e, 0x19acba2a, 0x180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_86) {
  s21_decimal dec_1 = {{0xce258ffa, 0x7606b87c, 0x15, 0x90000}};
  s21_decimal dec_2 = {{0xed09, 0x0, 0x0, 0x40000}};
  s21_decimal dec_check = {{0x37d56b9a, 0x7606b87e, 0x15, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_88) {
  s21_decimal dec_1 = {{0x7edc9230, 0x615, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x8624be7a, 0xb, 0x0, 0x0}};
  s21_decimal dec_check = {{0x50150aa, 0x621, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_89) {
  s21_decimal dec_1 = {{0x95b5b64b, 0x1, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x1937930f, 0x1d035d, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x8381dcc4, 0x1d035b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_90) {
  s21_decimal dec_1 = {{0x81ad1e46, 0x19946, 0x0, 0x80040000}};
  s21_decimal dec_2 = {{0x63e293b3, 0x122fa5, 0x0, 0x0}};
  s21_decimal dec_check = {{0x40fc61ea, 0xc6639347, 0x2, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_91) {
  s21_decimal dec_1 = {{0x2483a, 0x0, 0x0, 0x80040000}};
  s21_decimal dec_2 = {{0x3951eaa1, 0x0, 0x0, 0x80060000}};
  s21_decimal dec_check = {{0x3a362149, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_92) {
  s21_decimal dec_1 = {{0x67049350, 0x2e9aaeaa, 0x267c3, 0x0}};
  s21_decimal dec_2 = {{0x511e977c, 0x334727c9, 0x4b0274ed, 0x80000000}};
  s21_decimal dec_check = {{0xea1a042c, 0x4ac791e, 0x4b000d2a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_93) {
  s21_decimal dec_1 = {{0x99ae60ad, 0x16, 0x0, 0x90000}};
  s21_decimal dec_2 = {{0x1beca8, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x841e2f53, 0x68056, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_94) {
  s21_decimal dec_1 = {{0x674, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x923c, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x98b0, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_95) {
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0xf0a761d2, 0x58dca621, 0xbc62af69, 0x0}};
  s21_decimal dec_check = {{0xf0a761d2, 0x58dca621, 0xbc62af69, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_96) {
  s21_decimal dec_1 = {{0xaa3, 0x0, 0x0, 0x40000}};
  s21_decimal dec_2 = {{0x9ca4d367, 0x54b6, 0x0, 0x80090000}};
  s21_decimal dec_check = {{0x8c69db87, 0x54b6, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_97) {
  s21_decimal dec_1 = {{0xf611dea9, 0x5eac9dc7, 0x1c9fc7a, 0x800f0000}};

  s21_decimal dec_2 = {{0x1b254db1, 0xdc0, 0x0, 0x80040000}};

  s21_decimal dec_check = {{0x5c1046a9, 0x39abb254, 0x1cb3ca1, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_98) {
  s21_decimal dec_1 = {{0x2e824a, 0x0, 0x0, 0x80050000}};

  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};

  s21_decimal dec_check = {{0x224d4a, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_99) {
  s21_decimal dec_1 = {{0xd24cf1a8, 0xa485ffae, 0x5039c4, 0x110000}};

  s21_decimal dec_2 = {{0x1e2, 0x0, 0x0, 0x0}};

  s21_decimal dec_check = {{0xf020f1a8, 0x416ecc4e, 0x5039c7, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_100) {
  s21_decimal dec_1 = {{0x6ea3b2eb, 0x20d0a2, 0x0, 0x0}};

  s21_decimal dec_2 = {{0xe2e8b4f5, 0x244dd, 0x0, 0x80000000}};

  s21_decimal dec_check = {{0x8bbafdf6, 0x1e8bc4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_add_3) {
  s21_decimal dec_1 = {{0xc95b744, 0x175e, 0x0, 0x0}};

  s21_decimal dec_2 = {{0x9cba8086, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
  s21_decimal dec_1 = {{0x44ce39f9, 0xd80b1917, 0x10e5, 0x50000}};

  s21_decimal dec_2 = {{0x895582cc, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;

  int check = 1;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_22) {
  s21_decimal dec_1 = {{0x2d62353d, 0x546d5e61, 0x168af, 0x80000000}};

  s21_decimal dec_2 = {{0xda32a027, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;

  int check = 2;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_add_cases(void) {
  Suite *c = suite_create("s21_add_cases");
  TCase *tc = tcase_create("s21_add_tc");

  tcase_add_test(tc, s21_add_1);
  tcase_add_test(tc, s21_add_2);
  tcase_add_test(tc, s21_add_3);
  tcase_add_test(tc, s21_add_4);
  tcase_add_test(tc, s21_add_5);
  tcase_add_test(tc, s21_add_6);
  tcase_add_test(tc, s21_add_7);
  tcase_add_test(tc, s21_add_8);
  tcase_add_test(tc, s21_add_9);
  tcase_add_test(tc, s21_add_10);
  tcase_add_test(tc, s21_add_11);
  tcase_add_test(tc, s21_add_12);
  tcase_add_test(tc, s21_add_13);
  tcase_add_test(tc, s21_add_14);
  tcase_add_test(tc, s21_add_15);
  tcase_add_test(tc, s21_add_16);
  tcase_add_test(tc, s21_add_17);
  tcase_add_test(tc, s21_add_18);
  tcase_add_test(tc, s21_add_19);
  tcase_add_test(tc, s21_add_20);
  tcase_add_test(tc, s21_add_21);
  tcase_add_test(tc, s21_add_22);
  tcase_add_test(tc, s21_add_23);
  tcase_add_test(tc, s21_add_24);
  tcase_add_test(tc, s21_add_25);
  tcase_add_test(tc, s21_add_26);
  tcase_add_test(tc, s21_add_27);
  tcase_add_test(tc, s21_add_28);
  tcase_add_test(tc, s21_add_29);
  tcase_add_test(tc, s21_add_30);
  tcase_add_test(tc, s21_add_31);
  tcase_add_test(tc, s21_add_32);
  tcase_add_test(tc, s21_add_33);
  tcase_add_test(tc, s21_add_34);
  tcase_add_test(tc, s21_add_35);
  tcase_add_test(tc, s21_add_36);
  tcase_add_test(tc, s21_add_37);
  tcase_add_test(tc, s21_add_38);
  tcase_add_test(tc, s21_add_39);
  tcase_add_test(tc, s21_add_40);
  tcase_add_test(tc, s21_add_41);
  tcase_add_test(tc, s21_add_42);
  tcase_add_test(tc, s21_add_43);
  tcase_add_test(tc, s21_add_44);
  tcase_add_test(tc, s21_add_45);
  tcase_add_test(tc, s21_add_46);
  tcase_add_test(tc, s21_add_47);
  tcase_add_test(tc, s21_add_48);
  tcase_add_test(tc, s21_add_49);
  tcase_add_test(tc, s21_add_50);
  tcase_add_test(tc, s21_add_51);
  tcase_add_test(tc, s21_add_52);
  tcase_add_test(tc, s21_add_53);
  tcase_add_test(tc, s21_add_54);
  tcase_add_test(tc, s21_add_55);
  tcase_add_test(tc, s21_add_56);
  tcase_add_test(tc, s21_add_57);
  tcase_add_test(tc, s21_add_58);
  tcase_add_test(tc, s21_add_59);
  tcase_add_test(tc, s21_add_60);
  tcase_add_test(tc, s21_add_61);
  tcase_add_test(tc, s21_add_62);
  tcase_add_test(tc, s21_add_63);
  tcase_add_test(tc, s21_add_64);
  tcase_add_test(tc, s21_add_65);
  tcase_add_test(tc, s21_add_66);
  tcase_add_test(tc, s21_add_67);
  tcase_add_test(tc, s21_add_68);
  tcase_add_test(tc, s21_add_69);
  tcase_add_test(tc, s21_add_70);
  tcase_add_test(tc, s21_add_71);
  tcase_add_test(tc, s21_add_72);
  tcase_add_test(tc, s21_add_73);
  tcase_add_test(tc, s21_add_74);
  tcase_add_test(tc, s21_add_75);
  tcase_add_test(tc, s21_add_76);
  tcase_add_test(tc, s21_add_78);
  tcase_add_test(tc, s21_add_79);
  tcase_add_test(tc, s21_add_80);
  tcase_add_test(tc, s21_add_81);
  tcase_add_test(tc, s21_add_82);
  tcase_add_test(tc, s21_add_83);
  tcase_add_test(tc, s21_add_84);
  tcase_add_test(tc, s21_add_85);
  tcase_add_test(tc, s21_add_86);
  tcase_add_test(tc, s21_add_88);
  tcase_add_test(tc, s21_add_89);
  tcase_add_test(tc, s21_add_90);
  tcase_add_test(tc, s21_add_91);
  tcase_add_test(tc, s21_add_92);
  tcase_add_test(tc, s21_add_93);
  tcase_add_test(tc, s21_add_94);
  tcase_add_test(tc, s21_add_95);
  tcase_add_test(tc, s21_add_96);
  tcase_add_test(tc, s21_add_97);
  tcase_add_test(tc, s21_add_98);
  tcase_add_test(tc, s21_add_99);
  tcase_add_test(tc, s21_add_100);
  tcase_add_test(tc, fail_s21_add_3);
  tcase_add_test(tc, fail_s21_add_9);
  tcase_add_test(tc, fail_s21_add_22);

  suite_add_tcase(c, tc);
  return c;
}
