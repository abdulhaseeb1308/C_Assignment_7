// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int n1, n2, i, hcf;
    printf("Enter the Two Number  ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    if (hcf == 1)
    {
        printf("%d %d are co prime Number ", n1, n2);
    }
    else
    {
        printf("%d %d are not co prime Number ", n1, n2);
    }
}