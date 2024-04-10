#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100], c;
    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    fgets(arr, 100, stdin);

    printf("Enter a character to find frequency: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &c);

    int i = 0, cnt = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == c)
            cnt++;
        i++;
    }

    printf("Frequency of %c = %d", c, cnt);
    fflush(stdin);
    fflush(stdout);

    return 0;
}
