#include <stdio.h>
#include <stdlib.h>

/*
7.	Създайте динамичен двумерен масив от реални числа. Преобразувайте го в едномерен масив, съдържащ само елементите над главния диагонал. 
Размерът на новия масив да се определя динамично.
*/

int main ()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    double **matrix = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) 
    {
        matrix[i] = (double *)malloc(n * sizeof(double));
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%lf", &matrix[i][j]);
        }
    }

    int newSize = (n * (n - 1)) / 2;
    double *newArray = (double *)malloc(newSize * sizeof(double));

    int index = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            newArray[index++] = matrix[i][j];
        }
    }

    printf("Elements above the main diagonal:\n");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%.2lf ", newArray[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    free(newArray);
    return 0;
}