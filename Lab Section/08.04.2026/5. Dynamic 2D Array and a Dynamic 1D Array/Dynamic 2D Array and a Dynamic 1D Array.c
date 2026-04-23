#include <stdio.h>
#include <stdlib.h>

/*
5.	Създайте динамичен двумерен масив от цели числа. За всеки ред сортирайте елементите във възходящ ред. 
След това създайте нов едномерен масив, който съдържа максималния елемент от всеки ред.
*/

int main ()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int **array = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) 
    {
        array[i] = (int *)malloc(m * sizeof(int));
        printf("Enter elements for row %d: ", i + 1);
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m - 1; j++) 
        {
            for (int k = 0; k < m - j - 1; k++) 
            {
                if (array[i][k] > array[i][k + 1]) 
                {
                    int temp = array[i][k];
                    array[i][k] = array[i][k + 1];
                    array[i][k + 1] = temp;
                }
            }
        }
    }


    int *maxArray = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) 
    {
        maxArray[i] = array[i][m - 1]; 
    }

    printf("Maximum elements from each row: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", maxArray[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        free(array[i]);
    }
    free(array);
    free(maxArray);

    return 0;
}