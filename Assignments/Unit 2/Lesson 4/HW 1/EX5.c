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

    int var, loc = -1;
    printf("Enter the element to be searched: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &var);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == var)
        {
            loc = i + 1;
            break;
        }
    }

    printf("Number found at location = %d", loc);
    fflush(stdin);
    fflush(stdout);
    return 0;
}
