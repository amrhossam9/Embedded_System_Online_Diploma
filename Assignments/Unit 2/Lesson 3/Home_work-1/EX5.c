#include <stdio.h>

int main()
{
    char c;

    printf("##########Console-output###\n");
    printf("Enter a character: ");
    fflush(stdin);
    fflush(stdout);

    scanf("%c", &c);
    printf("ASCII value of %c = %d\n", c, c);

    printf("###########################\n");
    return 0;
}
