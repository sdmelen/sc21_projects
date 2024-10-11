#include "s21_test.h"
START_TEST(s21_sub_1) {
  s21_decimal dec_1 = {{0x8c1e8f91, 0x48dbd1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x23be3ec7, 0x2, 0x0, 0xa0000}};
  s21_decimal dec_check = {{0x1ad662c7, 0x2ffecc5b, 0xa9a326, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_2) {
  s21_decimal dec_1 = {{0x7efb, 0x0, 0x0, 0x50000}};
  s21_decimal dec_2 = {{0xe3cfa3a, 0x6f09ab, 0x0, 0x0}};
  s21_decimal dec_check = {{0xcb504145, 0x6e20a299, 0xa9, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_3) {
  s21_decimal dec_1 = {{0xa8ac456c, 0x14, 0x0, 0x800b0000}};
  s21_decimal dec_2 = {{0x1f8a791b, 0xfa10c, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x3f863294, 0xa3d959d1, 0x16be4a4, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_4) {
  s21_decimal dec_1 = {{0x4aa3ff8b, 0x3, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0x126bc, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x4a30de1b, 0x3, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_5) {
  s21_decimal dec_1 = {{0xe21ee403, 0x218e3, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x27ec1674, 0x80cb6b95, 0x0, 0x0}};
  s21_decimal dec_check = {{0x45cd3271, 0x80c952b1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_6) {
  s21_decimal dec_1 = {{0x4ebbf7d, 0x6ea, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x8b4af59, 0xce92186, 0x9c, 0x50000}};
  s21_decimal dec_check = {{0x41c4cb79, 0x1775f748, 0x9c, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_7) {
  s21_decimal dec_1 = {{0xd329294c, 0x8b189932, 0x3, 0x80000}};
  s21_decimal dec_2 = {{0x1b9a0625, 0x3cf7, 0x0, 0xc0000}};
  s21_decimal dec_check = {{0x5c43229b, 0x70e01461, 0x8a69, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_8) {
  s21_decimal dec_1 = {{0x57a5eea1, 0x36d65, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xb093a4ba, 0x61082311, 0x49f95a5d, 0x10000}};
  s21_decimal dec_check = {{0x1d0ef704, 0x612a6907, 0x49f95a5d, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_9) {
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x4c9be2a2, 0x45a8d7, 0x0, 0x800b0000}};
  s21_decimal dec_check = {{0xdd89b2a2, 0x45a905, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_10) {
  s21_decimal dec_1 = {{0x47, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x41077279, 0x6034ec6, 0x1, 0x80080000}};
  s21_decimal dec_check = {{0x99d60b79, 0x6034ec4, 0x1, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_11) {
  s21_decimal dec_1 = {{0xed0195bf, 0x65f9f8d7, 0xc7ef, 0x110000}};
  s21_decimal dec_2 = {{0xe50e2fd4, 0xdf32ed82, 0x1, 0x0}};
  s21_decimal dec_check = {{0x9af8812b, 0x3acfcd25, 0x6f927b7e, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_12) {
  s21_decimal dec_1 = {{0x35c1c615, 0x870a82b9, 0x1c4, 0x80000000}};
  s21_decimal dec_2 = {{0xa7af, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x35c11e66, 0x870a82b9, 0x1c4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_13) {
  s21_decimal dec_1 = {{0xa03cc641, 0xa026a9ed, 0x4, 0x80120000}};
  s21_decimal dec_2 = {{0xc6dc8da6, 0x50191ce4, 0xa3d4, 0x80000000}};

  s21_decimal dec_check = {{0x492138dc, 0x51b695f0, 0xf9fbd6b8, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_14) {
  s21_decimal dec_1 = {{0x1a0320, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x2ed81a04, 0x5f0a6665, 0xccb, 0x80010000}};
  s21_decimal dec_check = {{0x2fdc3944, 0x5f0a6665, 0xccb, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_15) {
  s21_decimal dec_1 = {{0xb0e7c4c8, 0x5a3, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x69b9be, 0x0, 0x0, 0x30000}};
  s21_decimal dec_check = {{0x8eef382, 0x16076b, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_16) {
  s21_decimal dec_1 = {{0xe4df41b5, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal dec_2 = {{0x713947, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xe46e086e, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_17) {
  s21_decimal dec_1 = {{0x6da, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x14069, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x1398f, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_18) {
  s21_decimal dec_1 = {{0x4f8f0bf4, 0xf53ad5e, 0xde0, 0x0}};
  s21_decimal dec_2 = {{0xe63b393, 0x75e, 0x0, 0x30000}};
  s21_decimal dec_check = {{0xb862fd8d, 0xdedd3108, 0x36333b, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_19) {
  s21_decimal dec_1 = {{0xf00bcb33, 0xfd88544a, 0x911c5668, 0x80070000}};
  s21_decimal dec_2 = {{0xfccc9a2, 0x14, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x53520e33, 0xf1932769, 0x911c5668, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_20) {
  s21_decimal dec_1 = {{0xe9a57886, 0x5df70472, 0x1, 0x0}};
  s21_decimal dec_2 = {{0x83103e79, 0x1a0ecefa, 0xf038265, 0x80050000}};
  s21_decimal dec_check = {{0xa017b639, 0x2538a6be, 0xf059866, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_21) {
  s21_decimal dec_1 = {{0x1ffcfaf0, 0x3dee7db8, 0x1, 0x80020000}};
  s21_decimal dec_2 = {{0x58bd5a99, 0xbab1eed9, 0x471cb, 0x0}};
  s21_decimal dec_check = {{0xc9f45eb4, 0x2b6fca9e, 0x1bc7396, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_22) {
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0x5e7253ee, 0xf0b92d5b, 0x56cc, 0x80100000}};
  s21_decimal dec_check = {{0x3b1953ee, 0xf0ce7e53, 0x56cc, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_23) {
  s21_decimal dec_1 = {{0xfcc10e58, 0x90f, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x30fe7c9d, 0x3eef, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x2dbf8af5, 0x47ff, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_24) {
  s21_decimal dec_1 = {{0xed239225, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xdd806ebb, 0x12805, 0x0, 0x50000}};
  s21_decimal dec_check = {{0x446023db, 0x4187e, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_25) {
  s21_decimal dec_1 = {{0x8780203a, 0xb60ab704, 0x31c0448, 0x80050000}};
  s21_decimal dec_2 = {{0xd15aa7a2, 0x6af, 0x0, 0x0}};
  s21_decimal dec_check = {{0x7b89b17a, 0xc03ebdd7, 0x31c0448, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_26) {
  s21_decimal dec_1 = {{0xf0916666, 0x115e7b1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x724bd698, 0x13, 0x0, 0x0}};
  s21_decimal dec_check = {{0x62dd3cfe, 0x115e7c5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_27) {
  s21_decimal dec_1 = {{0x5978d49, 0x0, 0x0, 0x80050000}};
  s21_decimal dec_2 = {{0xa8c62b8a, 0x3d709a10, 0x0, 0x0}};
  s21_decimal dec_check = {{0x67c6ff89, 0xf115ab87, 0x5dbf, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_28) {
  s21_decimal dec_1 = {{0xf3a7d4a5, 0xe8391b75, 0x1ee441, 0x70000}};
  s21_decimal dec_2 = {{0x41b42b8a, 0x11, 0x0, 0x80070000}};
  s21_decimal dec_check = {{0x355c002f, 0xe8391b87, 0x1ee441, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_29) {
  s21_decimal dec_1 = {{0xc395ab58, 0x5ba891be, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xa9a5de2d, 0xf084e6f1, 0x2f3955f, 0x800c0000}};
  s21_decimal dec_check = {{0x28f7c19e, 0x514d2edd, 0xd56126e5, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_30) {
  s21_decimal dec_1 = {{0xe4f79ae, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x69dc1f7b, 0x598acb70, 0x0, 0x80000}};
  s21_decimal dec_check = {{0x1d540d7b, 0x59e01774, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_31) {
  s21_decimal dec_1 = {{0xcb65b0a4, 0x5c6, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x6f56a3ab, 0x16a69a8, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xa3f0f307, 0x16a63e1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_32) {
  s21_decimal dec_1 = {{0x751af419, 0x7765cbdb, 0x3051e47, 0x80000000}};
  s21_decimal dec_2 = {{0x1db616, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x7538aa2f, 0x7765cbdb, 0x3051e47, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_33) {
  s21_decimal dec_1 = {{0xa4, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x1c5812fc, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x1c581258, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_34) {
  s21_decimal dec_1 = {{0x78f15d, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0x69f5ed36, 0xf, 0x0, 0x10000}};
  s21_decimal dec_check = {{0x697cfbd9, 0xf, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_35) {
  s21_decimal dec_1 = {{0x43356b64, 0xa6f3d25b, 0x2969976, 0x0}};
  s21_decimal dec_2 = {{0x1b3e03, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x431a2d61, 0xa6f3d25b, 0x2969976, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_36) {
  s21_decimal dec_1 = {{0x7619578a, 0x1, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xd076e5df, 0xd6c6017d, 0x85e2454b, 0x80000000}};
  s21_decimal dec_check = {{0x5a5d8e55, 0xd6c6017c, 0x85e2454b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_37) {
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x9305d85f, 0x1d5de87, 0x0, 0x0}};
  s21_decimal dec_check = {{0x9305d85f, 0x1d5de87, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_38) {
  s21_decimal dec_1 = {{0xa6fe847b, 0x184877a6, 0x16f076, 0x80000000}};
  s21_decimal dec_2 = {{0x2e23, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xa6feb29e, 0x184877a6, 0x16f076, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_39) {
  s21_decimal dec_1 = {{0xc21f11a8, 0xa04ce5df, 0xdab4f9f, 0x0}};
  s21_decimal dec_2 = {{0x16d688d, 0x0, 0x0, 0x50000}};
  s21_decimal dec_check = {{0x9536a735, 0x4300fabd, 0x88b11c3c, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_40) {
  s21_decimal dec_1 = {{0x1e679151, 0x2639f47f, 0x143bc7ee, 0x800a0000}};
  s21_decimal dec_2 = {{0x4a26e5c9, 0x4, 0x0, 0x80070000}};
  s21_decimal dec_check = {{0x7675f829, 0x2639e3bd, 0x143bc7ee, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_41) {
  s21_decimal dec_1 = {{0x37, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x399fc3f2, 0x6d8d3cc9, 0x1d5f, 0x80000000}};
  s21_decimal dec_check = {{0x399fc429, 0x6d8d3cc9, 0x1d5f, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_42) {
  s21_decimal dec_1 = {{0xe5aadd4b, 0xdf160b6b, 0x2454, 0x0}};
  s21_decimal dec_2 = {{0xc4bbd671, 0x95da7c4f, 0x1d1ceee7, 0x0}};
  s21_decimal dec_check = {{0xdf10f926, 0xb6c470e3, 0x1d1cca92, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_43) {
  s21_decimal dec_1 = {{0xce670069, 0x341, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xf2a56a3f, 0x6e05afae, 0x1c7, 0x80000000}};
  s21_decimal dec_check = {{0x243e69d6, 0x6e05ac6d, 0x1c7, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_44) {
  s21_decimal dec_1 = {{0x909363ad, 0x22b9b4, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x811a3cff, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal dec_check = {{0xf086d952, 0xffdd464a, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_45) {
  s21_decimal dec_1 = {{0x2cd107e, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0x78b67e0, 0x785f3e7e, 0x810b, 0x80120000}};
  s21_decimal dec_check = {{0xf68d67e0, 0x3970aca1, 0x1d88, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_46) {
  s21_decimal dec_1 = {{0x905cd2, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x6fd2e92f, 0x213d76, 0x0, 0x0}};
  s21_decimal dec_check = {{0x70634601, 0x213d76, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_47) {
  s21_decimal dec_1 = {{0xd6ba509b, 0x32eb, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x6d475a, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xd72797f5, 0x32eb, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_48) {
  s21_decimal dec_1 = {{0x7737b, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xbe36fc4, 0xc33e6b40, 0x4, 0x80000}};
  s21_decimal dec_check = {{0x93ad54c4, 0xc33e3ed6, 0x4, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_49) {
  s21_decimal dec_1 = {{0x34024a8a, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xce45b13c, 0xa9036052, 0x2314856, 0x0}};
  s21_decimal dec_check = {{0x247fbc6, 0xa9036053, 0x2314856, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_50) {
  s21_decimal dec_1 = {{0xcc1a0374, 0x7, 0x0, 0x90000}};
  s21_decimal dec_2 = {{0x79ca898e, 0x8ed493b1, 0xdda, 0x80000000}};
  s21_decimal dec_check = {{0xbb6a0004, 0x2a9ed0a2, 0xd3642deb, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_51) {
  s21_decimal dec_1 = {{0x9453fff7, 0x815252c5, 0x6f, 0x80000000}};
  s21_decimal dec_2 = {{0xbb4bc17f, 0x22a245, 0x0, 0x0}};
  s21_decimal dec_check = {{0x4f9fc176, 0x8174f50b, 0x6f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_53) {
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xd209c, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0xd20ba, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_54) {
  s21_decimal dec_1 = {{0x72757619, 0x97094212, 0x2a, 0x0}};
  s21_decimal dec_2 = {{0x432d5d77, 0x8df, 0x0, 0x0}};
  s21_decimal dec_check = {{0x2f4818a2, 0x97093933, 0x2a, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_55) {
  s21_decimal dec_1 = {{0xa9c96f8d, 0xa4bfefff, 0x14f18a1a, 0x80170000}};
  s21_decimal dec_2 = {{0x65805507, 0x2fcb, 0x0, 0x80010000}};
  s21_decimal dec_check = {{0xc70cdb8, 0xdc247406, 0xa9ccdc24, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_56) {
  s21_decimal dec_1 = {{0x8f83c36, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xf9, 0x0, 0x0, 0x20000}};
  s21_decimal dec_check = {{0x80f78611, 0x3, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_57) {
  s21_decimal dec_1 = {{0x18ae2c08, 0x54761b66, 0x515fc6e, 0x10000}};
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x18ae2eba, 0x54761b66, 0x515fc6e, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_58) {
  s21_decimal dec_1 = {{0x3d148f09, 0x1780ea8d, 0x2739c81, 0x0}};
  s21_decimal dec_2 = {{0x20a2fb65, 0x689, 0x0, 0x60000}};
  s21_decimal dec_check = {{0xb132dd64, 0x2e5b9f2b, 0xf529226d, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_59) {
  s21_decimal dec_1 = {{0x1b92e18f, 0x0, 0x0, 0x80010000}};
  s21_decimal dec_2 = {{0x40e55052, 0x7ec18e47, 0x42cfba, 0x80000000}};
  s21_decimal dec_check = {{0x6d6241a5, 0xf38f8ec8, 0x29c1d48, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_60) {
  s21_decimal dec_1 = {{0xd1a0c93c, 0xbdbb092e, 0x2216bd0, 0xc0000}};
  s21_decimal dec_2 = {{0xac3af, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_check = {{0x3c6da53c, 0xbdd41942, 0x2216bd0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_61) {
  s21_decimal dec_1 = {{0x120296ca, 0x0, 0x0, 0x80050000}};
  s21_decimal dec_2 = {{0x19a48557, 0x2d1f03c2, 0xd2634d0c, 0x80000000}};
  s21_decimal dec_check = {{0x19a47989, 0x2d1f03c2, 0xd2634d0c, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_62) {
  s21_decimal dec_1 = {{0x796bcb07, 0x1c9562a, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x57443fa0, 0xc55, 0x0, 0x0}};
  s21_decimal dec_check = {{0x22278b67, 0x1c949d5, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_63) {
  s21_decimal dec_1 = {{0xac21d72c, 0xc7ce2541, 0x2c, 0x80000000}};
  s21_decimal dec_2 = {{0xc19, 0x0, 0x0, 0x80040000}};
  s21_decimal dec_check = {{0xe9e51aa7, 0xe48f5553, 0x6d53c, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_64) {
  s21_decimal dec_1 = {{0x48f8193, 0x0, 0x0, 0x80020000}};
  s21_decimal dec_2 = {{0xc5a397c8, 0x38a3dd5b, 0xb8d, 0x50000}};
  s21_decimal dec_check = {{0x9635be00, 0x38a3dd6d, 0xb8d, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_65) {
  s21_decimal dec_1 = {{0x9257c463, 0x8, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x9a4de03e, 0x3db2, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x2ca5a4a1, 0x3dbb, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_66) {
  s21_decimal dec_1 = {{0x9f015726, 0x5f0d63d, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xf05ea15a, 0xf457f63e, 0xd7346a29, 0x0}};
  s21_decimal dec_check = {{0x8f5ff880, 0xfa48cc7c, 0xd7346a29, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_67) {
  s21_decimal dec_1 = {{0x3d5bb424, 0x1a2f21ad, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xe181d, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x3d4d9c07, 0x1a2f21ad, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_68) {
  s21_decimal dec_1 = {{0x52c4ce1e, 0xcdc021cd, 0x94f, 0x150000}};
  s21_decimal dec_2 = {{0xb4c353aa, 0xe28b183, 0xb5871eb, 0xc0000}};
  s21_decimal dec_check = {{0x789f6873, 0x8d955f35, 0x7174732e, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_69) {
  s21_decimal dec_1 = {{0xe3ec54d0, 0x8c49fd9c, 0x31, 0x80000000}};
  s21_decimal dec_2 = {{0x35a5b9d0, 0x7de0f312, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xae469b00, 0xe690a8a, 0x31, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_70) {
  s21_decimal dec_1 = {{0x3bc5d5, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x86fd986e, 0x4c61, 0x0, 0x0}};
  s21_decimal dec_check = {{0x86c1d299, 0x4c61, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_71) {
  s21_decimal dec_1 = {{0x66d884, 0x0, 0x0, 0x40000}};
  s21_decimal dec_2 = {{0x283af37c, 0x51212649, 0x415, 0x80000000}};
  s21_decimal dec_check = {{0x7f2df444, 0x1ee789b3, 0x9f80b1, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_72) {
  s21_decimal dec_1 = {{0x565a4e9, 0x0, 0x0, 0x80000}};
  s21_decimal dec_2 = {{0xef6683d3, 0x64, 0x0, 0x20000}};
  s21_decimal dec_check = {{0xfb94b5d7, 0x60425f5, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_73) {
  s21_decimal dec_1 = {{0x35, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x65d02cb2, 0x13be9b, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x65d02ce7, 0x13be9b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_74) {
  s21_decimal dec_1 = {{0x2a1d2bec, 0xcb85da26, 0x1c64e679, 0x0}};
  s21_decimal dec_2 = {{0x50cead3, 0xbe250f09, 0x13f, 0x80000000}};
  s21_decimal dec_check = {{0x2f2a16bf, 0x89aae92f, 0x1c64e7b9, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_75) {
  s21_decimal dec_1 = {{0x27716c6b, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x65fd7c5c, 0xbcd64ad9, 0x2146e, 0x80140000}};
  s21_decimal dec_check = {{0xc1b283a4, 0xe75961f9, 0xd5d029a6, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_76) {
  s21_decimal dec_1 = {{0xc707bef1, 0x9fe41773, 0x2, 0x800a0000}};
  s21_decimal dec_2 = {{0x2c49, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xc99bc2f1, 0x9fe47e8f, 0x2, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_77) {
  s21_decimal dec_1 = {{0x57adf, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x5c67feb1, 0x994d7cce, 0x28, 0x0}};
  s21_decimal dec_check = {{0x5c6d7990, 0x994d7cce, 0x28, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_78) {
  s21_decimal dec_1 = {{0xb9205211, 0x1, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x22a5ed11, 0x2, 0x0, 0x30000}};
  s21_decimal dec_check = {{0x39aa557, 0x6b9, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_79) {
  s21_decimal dec_1 = {{0x8ed4b36a, 0x24e59, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xbafbb7ea, 0x2c92d8e, 0x4a5f08, 0x80000000}};
  s21_decimal dec_check = {{0x2c270480, 0x2c6df35, 0x4a5f08, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_80) {
  s21_decimal dec_1 = {{0x17bae, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x422c3f1, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x4243f9f, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_81) {
  s21_decimal dec_1 = {{0x1fd6c972, 0xcd, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x22a3, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x1fd6ec15, 0xcd, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_82) {
  s21_decimal dec_1 = {{0x62, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xf, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0x53, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_83) {
  s21_decimal dec_1 = {{0xcb75a9a0, 0x45abc9b1, 0xc988802, 0x80050000}};
  s21_decimal dec_2 = {{0x7431e445, 0x6bd, 0x0, 0x0}};
  s21_decimal dec_check = {{0x6c6572c0, 0x4ff49f1e, 0xc988802, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_84) {
  s21_decimal dec_1 = {{0x2068e9a7, 0xfab71474, 0x15, 0x0}};
  s21_decimal dec_2 = {{0x1508, 0x0, 0x0, 0x30000}};
  s21_decimal dec_check = {{0x99d09f50, 0x5b27e59e, 0x55db, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_85) {
  s21_decimal dec_1 = {{0xf9, 0x0, 0x0, 0x10000}};
  s21_decimal dec_2 = {{0xdb02566d, 0x9c, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x8e17613b, 0x620, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_86) {
  s21_decimal dec_1 = {{0x87ca1192, 0xfb0997eb, 0x14584110, 0x80190000}};
  s21_decimal dec_2 = {{0x18d3e3a, 0x0, 0x0, 0x0}};
  s21_decimal dec_check = {{0xb458632, 0x54247ac8, 0x541f1c66, 0x80150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_87) {
  s21_decimal dec_1 = {{0x4c, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xaf6baedc, 0xe4444, 0x0, 0xe0000}};
  s21_decimal dec_check = {{0x93b6aedc, 0x29446d, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_88) {
  s21_decimal dec_1 = {{0x7483ec47, 0xcc69d503, 0x1, 0x80000000}};
  s21_decimal dec_2 = {{0xaca73765, 0xa8fe0b67, 0x1f4138d6, 0xf0000}};
  s21_decimal dec_check = {{0xee5f0d1b, 0xd03e2627, 0x6b32c919, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_89) {
  s21_decimal dec_1 = {{0x1189df1c, 0xf62c19e0, 0x1c0, 0x80000000}};
  s21_decimal dec_2 = {{0xdcbf1, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x117c132b, 0xf62c19e0, 0x1c0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_90) {
  s21_decimal dec_1 = {{0xff37722c, 0xbaa8dc40, 0x83, 0x160000}};
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x10000}};
  s21_decimal dec_check = {{0xf5c88dd4, 0xf3a491ed, 0x12d, 0x80160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_91) {
  s21_decimal dec_1 = {{0x25, 0x0, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x606a1f01, 0x19c4a, 0x0, 0x80020000}};
  s21_decimal dec_check = {{0x606a2d75, 0x19c4a, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_92) {
  s21_decimal dec_1 = {{0x23c31254, 0x54b04914, 0x123, 0x0}};
  s21_decimal dec_2 = {{0x91a6e62f, 0x227a1, 0x0, 0x800d0000}};
  s21_decimal dec_check = {{0x344d37a8, 0x6eb92d9, 0xada58df5, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_93) {
  s21_decimal dec_1 = {{0x8c65496d, 0x10912c, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x4f, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x8c65491e, 0x10912c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_94) {
  s21_decimal dec_1 = {{0xf131b5a1, 0x5be166ac, 0x3, 0xf0000}};
  s21_decimal dec_2 = {{0x683d30f7, 0xffd2bda2, 0x27d969, 0x80000000}};
  s21_decimal dec_check = {{0x32b8b7ae, 0x4f34c267, 0x9ba9460f, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_95) {
  s21_decimal dec_1 = {{0x20d6593c, 0x1c186, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x2f2b99a0, 0x187754, 0x0, 0x800b0000}};
  s21_decimal dec_check = {{0x135ac660, 0x779a86b8, 0x28e24b, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_96) {
  s21_decimal dec_1 = {{0x55cac6ac, 0x14eef8, 0x0, 0x0}};
  s21_decimal dec_2 = {{0x576ab42a, 0x386a, 0x0, 0x0}};
  s21_decimal dec_check = {{0xfe601282, 0x14b68d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_97) {
  s21_decimal dec_1 = {{0xd997c, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0x15f, 0x0, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0xd981d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_98) {
  s21_decimal dec_1 = {{0x1a, 0x0, 0x0, 0x20000}};
  s21_decimal dec_2 = {{0xb642f495, 0x1a040, 0x0, 0x80000000}};
  s21_decimal dec_check = {{0x32278a4e, 0xa29947, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_99) {
  s21_decimal dec_1 = {{0xa899b822, 0x3a8d, 0x0, 0x800d0000}};
  s21_decimal dec_2 = {{0x1e19c736, 0x88813c8, 0x0, 0x0}};
  s21_decimal dec_check = {{0x44f3983e, 0x6cf361a0, 0xc6a402ff, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_100) {
  s21_decimal dec_1 = {{0xfca6ee8d, 0x4, 0x0, 0x0}};
  s21_decimal dec_2 = {{0xb09155c2, 0x7b2b2e86, 0x6d04, 0x80000000}};
  s21_decimal dec_check = {{0xad38444f, 0x7b2b2e8b, 0x6d04, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  s21_decimal dec_1 = {{0x343e35d7, 0xbfda857, 0x0, 0x80000000}};
  s21_decimal dec_2 = {{0xece9262a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int check = 2;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases(void) {
  Suite *c = suite_create("s21_sub_cases");
  TCase *tc = tcase_create("s21_sub_tc");

  tcase_add_test(tc, s21_sub_1);
  tcase_add_test(tc, s21_sub_2);
  tcase_add_test(tc, s21_sub_3);
  tcase_add_test(tc, s21_sub_4);
  tcase_add_test(tc, s21_sub_5);
  tcase_add_test(tc, s21_sub_6);
  tcase_add_test(tc, s21_sub_7);
  tcase_add_test(tc, s21_sub_8);
  tcase_add_test(tc, s21_sub_9);
  tcase_add_test(tc, s21_sub_10);
  tcase_add_test(tc, s21_sub_11);
  tcase_add_test(tc, s21_sub_12);
  tcase_add_test(tc, s21_sub_13);
  tcase_add_test(tc, s21_sub_14);
  tcase_add_test(tc, s21_sub_15);
  tcase_add_test(tc, s21_sub_16);
  tcase_add_test(tc, s21_sub_17);
  tcase_add_test(tc, s21_sub_18);
  tcase_add_test(tc, s21_sub_19);
  tcase_add_test(tc, s21_sub_20);
  tcase_add_test(tc, s21_sub_21);
  tcase_add_test(tc, s21_sub_22);
  tcase_add_test(tc, s21_sub_23);
  tcase_add_test(tc, s21_sub_24);
  tcase_add_test(tc, s21_sub_25);
  tcase_add_test(tc, s21_sub_26);
  tcase_add_test(tc, s21_sub_27);
  tcase_add_test(tc, s21_sub_28);
  tcase_add_test(tc, s21_sub_29);
  tcase_add_test(tc, s21_sub_30);
  tcase_add_test(tc, s21_sub_31);
  tcase_add_test(tc, s21_sub_32);
  tcase_add_test(tc, s21_sub_33);
  tcase_add_test(tc, s21_sub_34);
  tcase_add_test(tc, s21_sub_35);
  tcase_add_test(tc, s21_sub_36);
  tcase_add_test(tc, s21_sub_37);
  tcase_add_test(tc, s21_sub_38);
  tcase_add_test(tc, s21_sub_39);
  tcase_add_test(tc, s21_sub_40);
  tcase_add_test(tc, s21_sub_41);
  tcase_add_test(tc, s21_sub_42);
  tcase_add_test(tc, s21_sub_43);
  tcase_add_test(tc, s21_sub_44);
  tcase_add_test(tc, s21_sub_45);
  tcase_add_test(tc, s21_sub_46);
  tcase_add_test(tc, s21_sub_47);
  tcase_add_test(tc, s21_sub_48);
  tcase_add_test(tc, s21_sub_49);
  tcase_add_test(tc, s21_sub_50);
  tcase_add_test(tc, s21_sub_51);
  tcase_add_test(tc, s21_sub_53);
  tcase_add_test(tc, s21_sub_54);
  tcase_add_test(tc, s21_sub_55);
  tcase_add_test(tc, s21_sub_56);
  tcase_add_test(tc, s21_sub_57);
  tcase_add_test(tc, s21_sub_58);
  tcase_add_test(tc, s21_sub_59);
  tcase_add_test(tc, s21_sub_60);
  tcase_add_test(tc, s21_sub_61);
  tcase_add_test(tc, s21_sub_62);
  tcase_add_test(tc, s21_sub_63);
  tcase_add_test(tc, s21_sub_64);
  tcase_add_test(tc, s21_sub_65);
  tcase_add_test(tc, s21_sub_66);
  tcase_add_test(tc, s21_sub_67);
  tcase_add_test(tc, s21_sub_68);
  tcase_add_test(tc, s21_sub_69);
  tcase_add_test(tc, s21_sub_70);
  tcase_add_test(tc, s21_sub_71);
  tcase_add_test(tc, s21_sub_72);
  tcase_add_test(tc, s21_sub_73);
  tcase_add_test(tc, s21_sub_74);
  tcase_add_test(tc, s21_sub_75);
  tcase_add_test(tc, s21_sub_76);
  tcase_add_test(tc, s21_sub_77);
  tcase_add_test(tc, s21_sub_78);
  tcase_add_test(tc, s21_sub_79);
  tcase_add_test(tc, s21_sub_80);
  tcase_add_test(tc, s21_sub_81);
  tcase_add_test(tc, s21_sub_82);
  tcase_add_test(tc, s21_sub_83);
  tcase_add_test(tc, s21_sub_84);
  tcase_add_test(tc, s21_sub_85);
  tcase_add_test(tc, s21_sub_86);
  tcase_add_test(tc, s21_sub_87);
  tcase_add_test(tc, s21_sub_88);
  tcase_add_test(tc, s21_sub_89);
  tcase_add_test(tc, s21_sub_90);
  tcase_add_test(tc, s21_sub_91);
  tcase_add_test(tc, s21_sub_92);
  tcase_add_test(tc, s21_sub_93);
  tcase_add_test(tc, s21_sub_94);
  tcase_add_test(tc, s21_sub_95);
  tcase_add_test(tc, s21_sub_96);
  tcase_add_test(tc, s21_sub_97);
  tcase_add_test(tc, s21_sub_98);
  tcase_add_test(tc, s21_sub_99);
  tcase_add_test(tc, s21_sub_100);
  tcase_add_test(tc, fail_s21_sub_7);

  suite_add_tcase(c, tc);
  return c;
}
