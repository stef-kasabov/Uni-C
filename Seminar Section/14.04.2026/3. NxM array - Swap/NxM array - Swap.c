#include <stdio.h>
#include <stdlib.h>

/*
3з. Дадена е матрица NxM запълнена с цели числа. Разменете редовете с най-голям и
най-малък елемент.
*/

int main ()
{
    int n, m;
    printf("Enter the dimensions (n m): ");
    scanf("%d %d", &n, &m);

    int arr[100][100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxRow = 0;
    int maxElement = arr[0][0];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (arr[i][j] > maxElement) 
            {
                maxElement = arr[i][j];
                maxRow = i;
            }
        }
    }

    int minRow = 0;
    int minElement = arr[0][0];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (arr[i][j] < minElement) 
            {
                minElement = arr[i][j];
                minRow = i;
            }
        }
    }

    for (int j = 0; j < m; j++) 
    {
        int temp = arr[maxRow][j];
        arr[maxRow][j] = arr[minRow][j];
        arr[minRow][j] = temp;
    }

    printf("The array after swapping rows:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}