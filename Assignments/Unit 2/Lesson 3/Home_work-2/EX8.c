#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter operator either + or - or * or divide : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &c);

    printf("Enter two operands: ");
    float a, b;
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &a, &b);

    if (c == '+')
    {
        printf("%f + %f = %f", a, b, a + b);
    }
    else if (c == '-')
    {
        printf("%f - %f = %f", a, b, a - b);
    }
    else if (c == '*')
    {
        printf("%f * %f = %f", a, b, a * b);
    }
    else
    {
        printf("%f / %f = %f", a, b, a / b * 1.0);
    }

    return 0;
}
