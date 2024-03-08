#include <stdio.h>
#include <ctype.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Error !!! Factorial of negative number doesn't exist.");
    }
    else
    {
        int fact = 1;
        for (int i = 1; i <= a; i++)
        {
            fact *= i;
        }

        printf("Factorial = %d", fact);
    }

    return 0;
}
