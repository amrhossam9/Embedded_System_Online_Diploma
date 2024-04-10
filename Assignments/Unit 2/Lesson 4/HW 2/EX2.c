#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    fgets(arr, 100, stdin);

    int i = 0;
    while (arr[++i] != '\0')
        ;
    i--; // Because it incremented additional one for \0

    printf("Length of string:%d", i);
    fflush(stdin);
    fflush(stdout);

    return 0;
}
