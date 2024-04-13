#include <stdio.h>

int isPrime(int x);

void GetPrime(int a, int b);

int main()
{
    printf("Enter two numbers(intervals): ");
    fflush(stdin);
    fflush(stdout);

    int a, b;
    scanf("%d %d", &a, &b);
    GetPrime(a, b);

    return 0;
}

int isPrime(int x)
{
    for (int i = 2; (i * i) <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void GetPrime(int a, int b)
{
    printf("Prime numbers between %d and %d are :", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}
