#include <stdio.h>

void rev(char *x);

int main()
{
    printf("Enter a sentence: ");
    fflush(stdin);
    fflush(stdout);

    char str[100];
    gets(str);
    rev(str);

    return 0;
}

void rev(char *x)
{
    if (*x != '\0')
    {
        rev(x + 1);
        printf("%c", *x);
    }
}
