#include <stdio.h>
#include <ctype.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &a);

    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }

    printf("sum = %d", sum);
}
