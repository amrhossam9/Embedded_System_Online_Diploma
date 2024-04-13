#include <stdio.h>

int fact(int x);

int main()
{
    printf("Enter an positive integer: ");
    fflush(stdin);
    fflush(stdout);

    int x;
    scanf("%d", &x);

    printf("Factorial of %d = %d\n", x, fact(x));

    return 0;
}

int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}
