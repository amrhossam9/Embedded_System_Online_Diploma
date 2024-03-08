#include <stdio.h>
#include <ctype.h>

int main()
{
    char n;
    printf("Enter an integer you want to check: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &n);

    n = tolower(n);

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        printf("%c is a vowel", n);
    }
    else
    {
        printf("%c is a constant", n);
    }
}
