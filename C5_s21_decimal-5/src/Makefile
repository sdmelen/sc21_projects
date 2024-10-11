CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
TFLAGS = -lcheck -lpthread -lm
SRC_DIRS = comparison conversion data_types extra_function arithmetic mappers operators
OBJ_DIR = obj
TEST_DIR = tests
OPEN = open
TRASH_DIR = /usr/local/lib/gcc/current/gcc/x86_64-apple-darwin22/13/include-fixed

ifeq ($(shell uname), Linux)
	OPEN = xdg-open
	TFLAGS += -lrt -lsubunit -lgcov
endif

SRC_FILES = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))
OBJ_FILES = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
TEST_SRC_FILES = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJ_FILES = $(patsubst %.c, $(OBJ_DIR)/%.o, $(TEST_SRC_FILES))

all: s21_decimal.a

s21_decimal.a: $(OBJ_FILES)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_OBJ_FILES) s21_decimal.a
	$(CC) $(CFLAGS) $(TEST_OBJ_FILES) s21_decimal.a -o test $(TFLAGS)
	./test

gcov_report: 
	$(CC) --coverage -o test $(TEST_SRC_FILES) $(SRC_FILES) $(TFLAGS)
	./test
	lcov -t "test" -o test.info -c -d . --rc branch_coverage=1 --exclude '$(TEST_DIR)/*' --exclude '$(TRASH_DIR)/*'
	genhtml -o report test.info --rc branch_coverage=0
	open ./report/index.html

clean:
	rm -rf $(OBJ_DIR)
	rm -rf *.a *.gcno *.gcda *.info
	rm -rf main test
	rm -rf report
