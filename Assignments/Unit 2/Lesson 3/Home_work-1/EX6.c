#include <stdio.h>

int main()
{
    float a, b;

    printf("##########Console-output###\n");
    printf("Enter value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b);

    float temp = a;
    a = b;
    b = temp;

    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);

    printf("###########################\n");
    return 0;
}
