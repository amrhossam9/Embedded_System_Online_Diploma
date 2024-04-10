#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100], REV[100];
    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    fgets(arr, 100, stdin);

    int len = strlen(arr) - 1;

    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        REV[j] = arr[i];
    }
    REV[len] = '\0';

    printf("Reverse string is: %s", REV);
    fflush(stdin);
    fflush(stdout);

    return 0;
}
