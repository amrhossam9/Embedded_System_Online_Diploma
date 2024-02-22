#include <stdio.h>

int main()
{
    float num1, num2;

    printf("##########Console-output###\n");
    printf("Enter two numbers: ");
    fflush(stdin);
    fflush(stdout);

    scanf("%f %f", &num1, &num2);
    printf("Sum: %f\n", num1 * num2);

    printf("###########################\n");
    return 0;
}
