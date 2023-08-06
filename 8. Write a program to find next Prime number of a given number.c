// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

// Function to find the next prime number after a given number
int findNextPrime(int num)
{
    int next = num + 1;

    while (true)
    {
        if (isPrime(next))
            return next;
        next++;
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int nextPrime = findNextPrime(num);
    printf("Next prime number after %d is: %d\n", num, nextPrime);

    return 0;
}
