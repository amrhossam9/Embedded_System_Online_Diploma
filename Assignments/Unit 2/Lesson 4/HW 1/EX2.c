#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the numbers of data: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);
    float *ptr = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("%d. Enter number: ", i + 1);
        fflush(stdin);
        fflush(stdout);

        scanf("%f", &(ptr[i]));
    }

    float avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += ptr[i];
    }

    avg = avg * 1.0 / n;

    printf("Average = %f", avg);
    fflush(stdin);
    fflush(stdout);

    return 0;
}
