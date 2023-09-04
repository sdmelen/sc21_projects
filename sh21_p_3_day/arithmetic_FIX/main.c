int main() {
    int num_1, num_2;
    int a;
    a = scanf("%d%d", &num_1, &num_2);
    int ch = getchar();
    if (a == 2 && ((char)ch == '\n' || (char)ch == ' ' || ch == EOF)) {  // (char)ch == '\n' === ch == 10
        int summ, minus, multiply;
        summ = num_1 + num_2;
        minus = num_1 - num_2;
        multiply = num_1 * num_2;
        if (num_2 == 0)
            printf("n/a");
        else {
            int division;
            division = num_1 / num_2;
            printf("%d %d %d %d\n", summ, minus, multiply, division);
        }
    } else {
        printf("n/a");
    }
    return 0;
}
