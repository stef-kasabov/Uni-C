#include <stdio.h>
#include <stdlib.h>

/*
8.	Създайте динамичен тримерен масив от цели числа с размери n, m и k. Запълнете го със стойности. За всяка “равнина” намерете сумата на 
елементите и създайте едномерен масив, който съдържа тези суми.
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
        }
    }

    printf("Enter the elements of the 3D array:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            for (int l = 0; l < k; l++) 
            {
                scanf("%d", &array[i][j][l]);
            }
        }
    }
    int *sums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) 
    {
        sums[i] = 0;
        for (int j = 0; j < m; j++) 
        {
            for (int l = 0; l < k; l++) 
            {
                sums[i] += array[i][j][l];
            }
        }
    }

    printf("Sums of each plane:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Plane %d: %d\n", i, sums[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);
    free(sums);

    return 0;
}