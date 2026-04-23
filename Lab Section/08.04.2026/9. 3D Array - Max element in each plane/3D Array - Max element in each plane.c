#include <stdio.h>
#include <stdlib.h>

/*
9.	Създайте динамичен тримерен масив от цели числа. Намерете максималния елемент във всяка равнина и създайте двумерен масив, който съдържа тези максимуми.
*/

int main ()
{
    int n, m, k;
    printf("Enter the dimensions of the 3D array (n m k): ");
    scanf("%d %d %d", &n, &m, &k);

    int ***array = (int ***)malloc(n * sizeof(int **));
    for (int i = 0; i < n; i++) 
    {
        array[i] = (int **)malloc(m * sizeof(int *));
        for (int j = 0; j < m; j++) 
        {
            array[i][j] = (int *)malloc(k * sizeof(int));
            printf("Enter elements for plane %d, row %d: ", i + 1, j + 1);
            for (int l = 0; l < k; l++) 
            {
                scanf("%d", &array[i][j][l]);
            }
        }
    }

    int **maxArray = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        maxArray[i] = (int *)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) 
        {
            int max = array[i][j][0];
            for (int l = 1; l < k; l++) 
            {
                if (array[i][j][l] > max) 
                {
                    max = array[i][j][l];
                }
            }
            maxArray[i][j] = max;
        }
    }

    printf("Max elements in each plane:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            printf("%d ", maxArray[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            free(array[i][j]);
        }
        free(array[i]);
        free(maxArray[i]);
    }
    free(array);
    free(maxArray);

    return 0;
}