#include "s21_string.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_errors.h"

s21_size_t s21_strlen(const char str[]) {
  s21_size_t length = 0;
  while (str[length] !=
         '\0')  // пока элемент массива номер length не будет равен концу строки
  {
    length++;
  }
  return length;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t length_cspn = 0;
  int found = 0;  // флаг совпадения символов

  for (s21_size_t i = 0; str1[i] != '\0'; i++) {
    for (s21_size_t j = 0; str2[j] != '\0'; j++) {
      if (str1[i] == str2[j]) {
        found = 1;  // символы совпали
        break;
      }
    }
    if (found) {
      break;  // не забываем про второй брейк
    }
    length_cspn++;
  }
  return length_cspn;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t dest_len = s21_strlen(dest);
  s21_size_t i;

  // Копируем n символов из src в конец dest
  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[dest_len + i] = src[i];
  }
  // Добавляем нулевой завершающий символ
  dest[dest_len + i] = '\0';

  return dest;
}

char *s21_strpbrk(
    char *str1,
    const char *str2) {  // разобраться с const char str1(подумать)
  int num = -1;
  char *res = str1;
  int i = 0;
  int j = 0;
  while (str1[i] != '\0') {
    while (str2[j] != '\0') {
      if (num == -1 && str2[j] == str1[i]) {
        num = i;
      }
      if (num != -1 && str2[j] == str1[i] && i < num) {
        num = i;
      }
      j++;
    }
    j = 0;
    i++;
  }
  if (num == -1) {
    return s21_NULL;
  }
  return &res[num];
}

char *s21_strncpy(char *dest, const char *src, int num) {
  int flag = 0;
  for (int i = 0; i < num; i++) {
    if (src[i] == '\0') {
      flag = 1;
    }
    if (flag == 0) {
      dest[i] = src[i];
    } else {
      dest[i] = '\0';
    }
  }
  return dest;
}

void *s21_memcpy(void *dest, const void *src, int n) {
  char *dest_pointer = (char *)dest;
  const char *src_pointer = (const char *)src;
  for (int i = 0; i < n; i++) {
    dest_pointer[i] = src_pointer[i];
  }
  return dest;
}

char *s21_strerror(int s21_errnum) {
  static char *messages[] = s21_STRERROR_MSGS;
  static char buff[128] = {'\0'};
  if (s21_errnum < 0 || s21_errnum > ERROR_MAX) {
    // s21_sprintf(buff, "Unknown error: %d", s21_errnum); СПРИНТФ ЕЩЕ НЕТ
    return buff;
  }
  return messages[s21_errnum];
}

void *s21_memset(void *str, int c, s21_size_t n) {
  char *p = (char *)str;
  if (str != s21_NULL) {
    for (s21_size_t i = 0; i < n; i++) {
      p[i] = c;
    }
  }
  return str;
}

char *s21_strtok(char *str, char *delim) {  // убрали const во втором аргументе
  if (delim == s21_NULL) return s21_NULL;
  static char *str1 = s21_NULL;
  char *tok = s21_NULL;
  if (str) str1 = str;
  if (str1) {
    while (*str1 && s21_strchr(delim, *str1)) {
      str1++;
    }
    if (*str1 != '\0') {
      tok = str1;
      while (*str1 && !s21_strchr(delim, *str1)) {
        str1++;
      }
      if (*str1) {
        *str1++ = '\0';
      } else {
        str1 = s21_NULL;
      }
    }
  }
  return tok;
}

int s21_memcmp(const void *s1, const void *s2, s21_size_t n) {
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  for (s21_size_t i = 0; i < n; i++) {
    if (p1[i] != p2[i]) {
      return (p1[i] - p2[i]);
    }
  }
  return 0;
}

int s21_strncmp(const char *s1, const char *s2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (s1[i] != s2[i]) {
      return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    if (s1[i] == '\0' || s2[i] == '\0') {
      break;
    }
  }
  return result;
}

char *s21_strstr(const char *haystack, const char *needle) {
  if (*needle == '\0') {
    return (char *)haystack;
  }
  for (const char *h = haystack; *h != '\0'; h++) {
    const char *h_start = h;
    const char *n = needle;
    while (*h_start != '\0' && *n != '\0' && *h_start == *n) {
      h_start++;
      n++;
    }
    if (*n == '\0') {
      return (char *)h;
    }
  }
  return s21_NULL;
}

char *s21_strrchr(char *string, int ch) {
  char *last_symbol;
  int count = 0;
  int iteration = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == (char)ch) {
      // printf("%c\n", ch);
      last_symbol = &string[i];
      count++;
    }
    iteration++;
  }
  if (ch == '\0') {
    return &string[iteration];
  }
  if (count) {
    // printf("%d\n", count);
    return last_symbol;
  }
  return s21_NULL;
}

char *s21_strchr(const char *string, int ch) {
  int count = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    count++;
    if (string[i] == ch) {  // убрал преобразование типа в чар, так как  иначе
                            // вертер поставит 0
      // printf("%c\n", ch);
      return (char *)(string + i);
    }
  }
  if (ch == '\0') {
    return (char *)(string + count);
  }
  return s21_NULL;
}

void *s21_memchr(const void *arr, int c, s21_size_t n) {
  // 1. преобразуем void* в const unsigned char*, чтобы работать с отдельными
  // байтами
  const unsigned char *p = (const unsigned char *)arr;
  // 2. преобразуем int c в unsigned char, чтобы корректно сравнивать с байтами
  unsigned char target = (unsigned char)c;
  // 3. проходим по n байтам, начиная с p
  for (s21_size_t i = 0; i < n; i++) {
    // 4. сравниваем текущий байт с искомым значением
    if (p[i] == target) {
      // 5. если они совпадают, возвращаем указатель на этот байт
      return (void *)&p[i];
    }
  }
  // 6. если выполнен весь цикл, но совпадение не найдено, возвращаем NULL
  return s21_NULL;
}

void *s21_to_lower(const char *str) {
  if (str == s21_NULL) {
    return s21_NULL;
  }
  s21_size_t len = s21_strlen(str);
  char *copy = (char *)malloc(len + 1);  // +1 для завершающего нулевого символа

  if (copy == s21_NULL) {
    return s21_NULL;
  }

  for (s21_size_t i = 0; i < len; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      copy[i] = str[i] + 32;
    } else {
      copy[i] = str[i];
    }
  }

  copy[len] = '\0';
  return copy;
}

void *s21_to_upper(const char *str) {
  if (str == s21_NULL) {
    return s21_NULL;
  }
  s21_size_t len = s21_strlen(str);
  char *copy = (char *)malloc(len + 1);  // +1 для завершающего нулевого символа

  if (copy == s21_NULL) {
    return s21_NULL;
  }

  for (s21_size_t i = 0; i < len; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      copy[i] = str[i] - 32;
    } else {
      copy[i] = str[i];
    }
  }

  copy[len] = '\0';
  return copy;
}

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  if (src == s21_NULL || str == s21_NULL || start_index > s21_strlen(src)) {
    return s21_NULL;
  }

  s21_size_t src_len = s21_strlen(src);  // это длинна исходной строки
  s21_size_t str_len =
      s21_strlen(str);  // а это длинна строки, которую мы вставляем
  s21_size_t new_len = src_len + str_len;  // длина новой строки

  char *new_str = (char *)malloc(
      new_len + 1);  // выделяем память под новую строку с запасом для \0
  if (new_str == s21_NULL) {
    return s21_NULL;
  }

  // Копируем часть исходной строки до start_index
  s21_strncpy(new_str, src, start_index);

  // Копируем строку str в new_str начиная с позиции start_index
  s21_strncpy(new_str + start_index, str, str_len);

  // Копируем оставшуюся часть исходной строки
  s21_strncpy(new_str + start_index + str_len, src + start_index,
              src_len - start_index);

  // Завершаем строку нулевым символом
  new_str[new_len] = '\0';

  return new_str;
}

void *s21_trim(const char *src, const char *trim_chars) {
  if (!src || !trim_chars) return s21_NULL;
  char *res = s21_NULL;
  s21_size_t src_len = s21_strlen(src);
  const char *end = src + src_len - 1;
  while (*src && s21_strchr(trim_chars, *src)) src++;
  while (end > src && s21_strchr(trim_chars, *end)) end--;
  s21_size_t res_len = end - src + 1;
  res = malloc(res_len + 1);
  res = s21_strncpy(res, src, res_len);
  *(res + res_len) = '\0';
  return (void *)res;
}

int s21_sprintf(char *str, const char *format, ...) {
  va_list args;
  va_start(args, format);
  const char *format_ptr = format;
  char *str_ptr = str;
  char temp_str[1024] = {'\0'};
  char *temp_ptr = temp_str;
  struct options opts = {};
  struct options *opts_ptr = &opts;
  while (*format_ptr) {
    if (*format_ptr == '%') {
      format_ptr++;
      format_ptr = parse_flags(opts_ptr, format_ptr);
      format_ptr = parse_width(opts_ptr, format_ptr, args);
      format_ptr = parse_precision(opts_ptr, format_ptr, args);
      format_ptr = parse_length(opts_ptr, format_ptr);
      char *temp_str = parse_specifier(format_ptr, args, temp_ptr, opts_ptr);
      while (*temp_str != '\0') {
        *str_ptr++ = *temp_str++;
      }
      format_ptr++;
      for (s21_size_t i = 0; i < sizeof(struct options) / sizeof(int); i++) {
        ((int *)opts_ptr)[i] = 0;
      }
    } else {
      *str_ptr++ = *format_ptr++;
    }
  }
  *str_ptr = '\0';
  va_end(args);
  return (str_ptr - str);
}

const char *parse_flags(struct options *opts_ptr, const char *format_ptr) {
  while (*format_ptr == '-' || *format_ptr == '+' || *format_ptr == ' ' ||
         *format_ptr == '#' || *format_ptr == '0') {
    switch (*format_ptr) {
      case '-':
        opts_ptr->minus_flag = 1;
        break;
      case '+':
        opts_ptr->plus_flag = 1;
        break;
      case ' ':
        opts_ptr->space_flag = 1;
        break;
      case '#':
        opts_ptr->sharp_flag = 1;
        break;
      case '0':
        opts_ptr->zero_flag = 1;
        break;
    }
    format_ptr++;
  }
  return format_ptr;
}

const char *parse_width(struct options *opts_ptr, const char *format_ptr,
                        va_list args) {
  if (*format_ptr == '*') {
    opts_ptr->width = va_arg(args, int);
    format_ptr++;
  } else {
    while (isdigit(*format_ptr)) {
      opts_ptr->width = opts_ptr->width * 10 + (*format_ptr++ - '0');
    }
  }
  return format_ptr;
}

const char *parse_precision(struct options *opts_ptr, const char *format_ptr,
                            va_list args) {
  opts_ptr->precision = -1;
  if (*format_ptr == '.') {
    opts_ptr->point = 1;
    format_ptr++;
    if (*format_ptr == '*') {
      opts_ptr->precision = va_arg(args, int);
      format_ptr++;
    } else {
      opts_ptr->precision = 0;
      while (isdigit(*format_ptr)) {
        opts_ptr->precision = opts_ptr->precision * 10 + (*format_ptr++ - '0');
      }
    }
  }
  return format_ptr;
}

const char *parse_length(struct options *opts_ptr, const char *format_ptr) {
  opts_ptr->length = 0;
  if (*format_ptr == 'h' || *format_ptr == 'l' || *format_ptr == 'L') {
    opts_ptr->length = *format_ptr++;
  }
  return format_ptr;
}

char *parse_specifier(const char *format_ptr, va_list args, char *temp_ptr,
                      struct options *opts_ptr) {
  s21_memset(temp_ptr, '\0', SIZE);
  switch (*format_ptr) {
    case 'c':
      temp_ptr = format_c_specifier(opts_ptr, args, temp_ptr);
      break;
    case 'd':
    case 'i':
      temp_ptr = format_d_specifier(opts_ptr, args, temp_ptr);
      break;
    case 'e':
    case 'E':
      break;
    case 'f':
      temp_ptr = format_f_specifier(opts_ptr, args, temp_ptr);
      break;
    case 'g':
    case 'G':
      break;
    case 'o':
      break;
    case 's':
      temp_ptr = format_s_specifier(opts_ptr, args, temp_ptr);
      break;
    case 'u':
      temp_ptr = format_u_specifier(opts_ptr, args, temp_ptr);
      break;
    case 'x':
    case 'X':
      break;
    case 'p':
      break;
    case 'n':
      break;
    case '%':
      temp_ptr[0] = '%';
      break;
    default:
      break;
  }
  return temp_ptr;
}

char *format_d(char *temp_ptr, int is_negative, struct options *opts_ptr,
               int num_len) {
  int total_len = num_len;
  if (is_negative || opts_ptr->plus_flag || opts_ptr->space_flag) {
    total_len++;
  }
  if (opts_ptr->point && opts_ptr->precision > num_len) {
    total_len = opts_ptr->precision;
    if (is_negative || opts_ptr->plus_flag || opts_ptr->space_flag) {
      total_len++;
    }
  }
  char pad_char = ' ';
  if (opts_ptr->zero_flag && opts_ptr->precision == -1 &&
      !opts_ptr->minus_flag) {
    if (is_negative || opts_ptr->plus_flag) {
      *temp_ptr++ = is_negative ? '-' : '+';
      is_negative = 0;
    }
    pad_char = '0';
  }
  if (!opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = pad_char;
    }
  }
  if (!opts_ptr->zero_flag || opts_ptr->precision != -1 ||
      opts_ptr->minus_flag) {
    if (is_negative) {
      *temp_ptr++ = '-';
    } else if (opts_ptr->plus_flag) {
      *temp_ptr++ = '+';
    } else if (opts_ptr->space_flag) {
      *temp_ptr++ = ' ';
    }
  }
  if (opts_ptr->zero_flag && opts_ptr->precision == -1 &&
      !opts_ptr->minus_flag) {
    pad_char = '0';
  }
  if (opts_ptr->point && opts_ptr->precision > num_len) {
    int zero_len = opts_ptr->precision - num_len;
    while (zero_len-- > 0) {
      *temp_ptr++ = '0';
    }
  }
  return temp_ptr;
}

char *format_d_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr) {
  char *start_ptr = temp_ptr;
  long num = 0;
  if (opts_ptr->length == 'h') {
    num = (short)va_arg(args, int);
  } else if (opts_ptr->length == 'l') {
    num = va_arg(args, long);
  } else {
    num = va_arg(args, int);
  }
  int is_negative = 0;
  if (num < 0) {
    is_negative = 1;
    num = -num;
  }
  int num_len = 0;
  unsigned long n = (unsigned long)num;
  do {
    num_len++;
    n /= 10;
  } while (n);
  temp_ptr = format_d(temp_ptr, is_negative, opts_ptr, num_len);
  char digits[SIZE] = {'\0'};
  int i = num_len - 1;
  do {
    digits[i--] = '0' + (num % 10);
    num /= 10;
  } while (num);
  for (i = 0; i < num_len; i++) {
    *temp_ptr++ = digits[i];
  }
  int total_len = num_len;
  if (is_negative || opts_ptr->plus_flag || opts_ptr->space_flag) {
    total_len++;
  }
  if (opts_ptr->point && opts_ptr->precision > num_len) {
    total_len = opts_ptr->precision +
                (is_negative || opts_ptr->plus_flag || opts_ptr->space_flag);
  }
  if (opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = ' ';
    }
  }
  *temp_ptr = '\0';
  return start_ptr;
}

char *format_f_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr) {
  char *start_ptr = temp_ptr;

  long double num;
  int is_negative, precision;
  long double rounding_adjustment;
  long long int_part;
  long double frac_part;

  process_number(opts_ptr, args, &num, &is_negative, &precision,
                 &rounding_adjustment, &int_part, &frac_part);

  char int_str[SIZE] = {'\0'};
  int int_len = 0;
  if (int_part == 0) {
    int_str[int_len++] = '0';
  } else {
    while (int_part > 0) {
      int_str[int_len++] = '0' + (int_part % 10);
      int_part /= 10;
    }
  }

  for (int i = 0; i < int_len / 2; ++i) {
    char temp = int_str[i];
    int_str[i] = int_str[int_len - i - 1];
    int_str[int_len - i - 1] = temp;
  }
  int_str[int_len] = '\0';

  char frac_str[SIZE] = {'\0'};
  int frac_len = 0;
  if (precision > 0) {
    for (int i = 0; i < precision; ++i) {
      frac_part *= 10;
      int digit = (int)frac_part;
      frac_str[i] = '0' + digit;
      frac_part -= digit;
    }
    frac_str[precision] = '\0';
    frac_len = precision;
  }

  temp_ptr = format_f(int_str, int_len, frac_str, frac_len, opts_ptr,
                      is_negative, temp_ptr);

  *temp_ptr = '\0';
  return start_ptr;
}

void process_number(struct options *opts_ptr, va_list args, long double *num,
                    int *is_negative, int *precision,
                    long double *rounding_adjustment, long long *int_part,
                    long double *frac_part) {
  *num = 0;
  if (opts_ptr->length == 'L') {
    *num = va_arg(args, long double);
  } else {
    *num = va_arg(args, double);
  }

  *is_negative = 0;
  if (*num < 0) {
    *is_negative = 1;
    *num = -*num;
  }

  *precision =
      (opts_ptr->point && opts_ptr->precision >= 0) ? opts_ptr->precision : 6;

  *rounding_adjustment = 0.5;
  for (int i = 0; i < *precision; ++i) {
    *rounding_adjustment /= 10.0;
  }

  *num += *rounding_adjustment;

  *int_part = (long long)*num;
  *frac_part = *num - (long double)*int_part;
}

char *format_f(char *int_str, int int_len, char *frac_str, int frac_len,
               struct options *opts_ptr, int is_negative, char *temp_ptr) {
  int total_len = int_len + frac_len;
  if (is_negative || opts_ptr->plus_flag || opts_ptr->space_flag) {
    total_len++;
  }

  if (frac_len > 0 || opts_ptr->sharp_flag) {
    total_len++;
  }

  char pad_char = (opts_ptr->zero_flag && !opts_ptr->minus_flag) ? '0' : ' ';
  if (!opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = pad_char;
    }
  }

  if (is_negative) {
    *temp_ptr++ = '-';
  } else if (opts_ptr->plus_flag) {
    *temp_ptr++ = '+';
  } else if (opts_ptr->space_flag) {
    *temp_ptr++ = ' ';
  }

  for (int i = 0; i < int_len; ++i) {
    *temp_ptr++ = int_str[i];
  }

  if (frac_len > 0 || opts_ptr->sharp_flag) {
    *temp_ptr++ = '.';
  }

  for (int i = 0; i < frac_len; ++i) {
    *temp_ptr++ = frac_str[i];
  }

  if (opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = ' ';
    }
  }

  return temp_ptr;
}

char *format_s_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr) {
  const char *str = va_arg(args, const char *);
  if (!str) {
    str = "(null)";
  }

  int str_len = 0;
  while (str[str_len] != '\0') {
    str_len++;
  }

  int actual_len = str_len;
  if (opts_ptr->point && opts_ptr->precision >= 0 &&
      opts_ptr->precision < str_len) {
    actual_len = opts_ptr->precision;
  }

  int pad_len = opts_ptr->width > actual_len ? opts_ptr->width - actual_len : 0;

  char pad_char = (opts_ptr->zero_flag && !opts_ptr->minus_flag) ? '0' : ' ';

  char *start_ptr = temp_ptr;

  if (!opts_ptr->minus_flag) {
    while (pad_len-- > 0) {
      *temp_ptr++ = pad_char;
    }
  }

  for (int i = 0; i < actual_len; i++) {
    *temp_ptr++ = str[i];
  }

  if (opts_ptr->minus_flag) {
    while (pad_len-- > 0) {
      *temp_ptr++ = ' ';
    }
  }

  *temp_ptr = '\0';

  return start_ptr;
}

char *format_u_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr) {
  char *start_ptr = temp_ptr;

  int num_len = 0;
  unsigned long long num = get_number_and_length(opts_ptr, args, &num_len);

  temp_ptr = format_number(opts_ptr, num, num_len, temp_ptr);

  return start_ptr;
}

unsigned long long get_number_and_length(struct options *opts_ptr, va_list args,
                                         int *num_len) {
  unsigned long long num = 0;
  if (opts_ptr->length == 'h') {
    num = (unsigned short)va_arg(args, unsigned int);
  } else if (opts_ptr->length == 'l') {
    num = va_arg(args, unsigned long);
  } else {
    num = va_arg(args, unsigned int);
  }

  *num_len = 0;
  unsigned long long n = num;
  do {
    (*num_len)++;
    n /= 10;
  } while (n);

  return num;
}

char *format_number(struct options *opts_ptr, unsigned long long num,
                    int num_len, char *temp_ptr) {
  int total_len = num_len;
  if (opts_ptr->point && opts_ptr->precision > num_len) {
    total_len = opts_ptr->precision;
  }

  char pad_char = (opts_ptr->zero_flag && !opts_ptr->minus_flag &&
                   opts_ptr->precision == -1)
                      ? '0'
                      : ' ';

  if (!opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = pad_char;
    }
  }

  if (opts_ptr->point && opts_ptr->precision > num_len) {
    int zero_len = opts_ptr->precision - num_len;
    while (zero_len-- > 0) {
      *temp_ptr++ = '0';
    }
  }

  char digits[SIZE] = {'\0'};
  int i = num_len - 1;
  do {
    digits[i--] = '0' + (num % 10);
    num /= 10;
  } while (num);

  for (i = 0; i < num_len; i++) {
    *temp_ptr++ = digits[i];
  }

  if (opts_ptr->minus_flag && opts_ptr->width > total_len) {
    int pad_len = opts_ptr->width - total_len;
    while (pad_len-- > 0) {
      *temp_ptr++ = ' ';
    }
  }

  *temp_ptr = '\0';

  return temp_ptr;
}

char *format_c_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr) {
  char c = (char)va_arg(args, int);
  int pad_len = opts_ptr->width > 1 ? opts_ptr->width - 1 : 0;
  char pad_char = (opts_ptr->zero_flag && !opts_ptr->minus_flag) ? '0' : ' ';

  if (!opts_ptr->minus_flag) {
    while (pad_len-- > 0) {
      *temp_ptr++ = pad_char;
    }
  }

  *temp_ptr++ = c;

  if (opts_ptr->minus_flag) {
    while (pad_len-- > 0) {
      *temp_ptr++ = ' ';
    }
  }

  *temp_ptr = '\0';
  return temp_ptr - (opts_ptr->width > 1 ? opts_ptr->width : 1);
}

int s21_startsymbol(const char *src, const char *trim_chars, s21_size_t pos) {
  while (*trim_chars) {
    if (src[pos] == *trim_chars) {
      return 1;
    }
    trim_chars++;
  }
  return 0;
}

int s21_endsymbol(const char *src, const char *trim_chars, s21_size_t pos) {
  while (*trim_chars) {
    if (src[pos - 1] == *trim_chars) {
      return 1;
    }
    trim_chars++;
  }
  return 0;
}
