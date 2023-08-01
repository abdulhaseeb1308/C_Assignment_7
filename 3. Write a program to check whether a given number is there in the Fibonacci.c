// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int num;
    int a = 0, b = 1, c, i;
    printf("Enter the Number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {

        c = a + b;
        a = b;
        b = c;
        if (c == num)
            printf("its Fibonacci series number \n");
    }
}