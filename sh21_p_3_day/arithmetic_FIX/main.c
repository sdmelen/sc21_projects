#include <stdio.h>
#include <conio.h>

int main()
{
    int num_1, num_2;
    int a;
    a = scanf("%d%d", &num_1, &num_2);
    if(a == 2)
    {
        int summ, minus, multiply, division;
        summ = num_1 + num_2;
        minus = num_1 - num_2;
        multiply = num_1 * num_2;
        if (num_2 == 0)
            printf("n/a\n");
        else
        {
            division = num_1 / num_2;
            printf("%d %d %d %d\n", summ, minus, multiply, division);
        }
    }
    else
    {
        printf("n/a\n");
    }
    getch();
    return 0;
}

