#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter a character : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &a);

    if (isalpha(a))
    {
        printf("%c is an alphabet", a);
    }
    else
    {
        printf("%c is not an alphabet", a);
    }
}
