#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter no of elements: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &(arr[i]));
    }

    int var, loc;
    printf("Enter the element to be inserted: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &var);

    printf("Enter the location: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &loc);

    float *arr1 = (float *)malloc((n + 1) * sizeof(float));
    for (int i = 0; i < loc - 1; i++)
    {
        arr1[i] = arr[i];
    }
    arr1[loc - 1] = var;
    for (int i = loc; i < n + 1; i++)
    {
        arr1[i] = arr[i - 1];
    }

    for (int i = 0; i < n + 1; i++)
    {
        printf("%.2f ", arr1[i]);
    }

    return 0;
}
