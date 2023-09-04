#include <stdio.h>
#include <conio.h>

int max_number(int j, int k)
{
    int x;
    if(j>k)
        x=j;
    else x=k;
    return x; 
}

int main()
{   int result;
    int num_1, num_2;
    int a;
    a = scanf("%d%d", &num_1, &num_2);
    if(a == 2)
    {
        result=max_number(num_1, num_2);
        printf("%d", result);
    }
    else
    {
        printf("n/a\n");
    }
    getch();
    return 0;
}