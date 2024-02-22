#include <stdio.h>

int main()
{
    int num1, num2;

    printf("##########Console-output###\n");
    printf("Enter two integers: ");
    fflush(stdin);
    fflush(stdout);

    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);

    printf("###########################\n");
    return 0;
}
