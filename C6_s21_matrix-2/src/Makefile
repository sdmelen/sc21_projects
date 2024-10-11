CC= gcc 
CFLAGS= -Wall -Werror -Wextra -std=c11          
TFLAGS = -lcheck -lpthread -lm
TEST=s21_matrix_test
OPEN = open

ifeq ($(shell uname), Linux)
	OPEN = xdg-open
	TFLAGS += -lrt -lsubunit -lgcov
endif

all: s21_matrix.a

               
test: s21_matrix.a
	$(CC) -o $(TEST) $(TEST).c  s21_matrix.a $(TFLAGS) 
	./$(TEST)

s21_matrix.a:
	$(CC)  -c s21_matrix.c -o s21_matrix.o
	ar rcs s21_matrix.a s21_matrix.o
	ranlib s21_matrix.a

gcov_report: 
	$(CC) --coverage -o $(TEST) $(TEST).c s21_matrix.c $(TFLAGS)   
	./$(TEST)
	lcov -t "$(TEST)" -o $(TEST).info -c -d . --rc branch_coverage=1
	genhtml -o report $(TEST).info --rc branch_coverage=1
	xdg-open ./report/index.html

clang:
	clang-format -i *.c *.h
	clang-format -n *.c *.h

clean:
	rm -rf *.a && rm -rf *.gcda
	rm -rf *.o && rm -rf *.gcno
	rm -rf report && rm -rf *.info  
	rm -rf $(TEST)

