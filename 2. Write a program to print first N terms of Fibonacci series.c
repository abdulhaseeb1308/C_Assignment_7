// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int num, i, num1 = 0, num2 = 1, num3;
    printf("Enter The Number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
}