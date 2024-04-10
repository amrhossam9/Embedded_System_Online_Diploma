#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter rows and column of matrix: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d", &r, &c);

    float **arr = (float **)malloc(r * sizeof(float *));
    for (int i = 0; i < r; i++)
        arr[i] = (float *)malloc(c * sizeof(float));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d ", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &(arr[i][j]));
        }
    }

    printf("Entered matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%f ", arr[i][j]);
            fflush(stdin);
            fflush(stdout);
        }
        printf("\n");
    }

    printf("Transpose of matrix: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%f ", arr[j][i]);
            fflush(stdin);
            fflush(stdout);
        }
        printf("\n");
    }

    return 0;
}
