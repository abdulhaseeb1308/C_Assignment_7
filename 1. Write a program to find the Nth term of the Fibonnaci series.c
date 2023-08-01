// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int num, i, a = 0, b = 1, c;
    printf("Enter the Nth number");
    scanf("%d", &num);
    printf("the fibonacci series are: ");
    for (i = 1; i <= num; i++)
    {
        if (i == num)
        {
            printf("%d ", a);
        }

        c = a + b;
        a = b;
        b = c;
    }
}
-