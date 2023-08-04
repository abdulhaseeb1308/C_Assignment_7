// Write a program to print all Prime numbers between two given numbers
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
    int srt_num, end_num;
    printf("Enter the Starting Number\n");
    scanf("%d", &srt_num);
    printf("Enter the End Number\n");
    scanf("%d", &end_num);
    printf("Prime numbers between %d and %d:\n", srt_num, end_num);

    for (int i = srt_num; i < end_num; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
