// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    printf("Prime numbers under 100:\n");

    for (int i = 2; i < 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
