#include <stdio.h>
#include <stdlib.h>

/*
4.	Създайте динамичен двумерен масив от цели числа с размери n и m. Намерете реда с най-голяма сума и колоната с най-малка сума. 
Изведете индексите и стойностите им.
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
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &array[i][j]);
        }
    }

    int maxRowSum = array[0][0];
    int maxRowIndex = 0;

    for (int i = 0; i < n; i++) 
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++) 
        {
            rowSum += array[i][j];
        }
        if (rowSum > maxRowSum) 
        {
            maxRowSum = rowSum;
            maxRowIndex = i;
        }
    }

    int minColSum = array[0][0];
    int minColIndex = 0;
    for (int j = 0; j < m; j++) 
    {
        int colSum = 0;
        for (int i = 0; i < n; i++) 
        {
            colSum += array[i][j];
        }
        if (colSum < minColSum) 
        {
            minColSum = colSum;
            minColIndex = j;
        }
    }

    printf("Row with the largest sum: Index = %d, Sum = %d\n", maxRowIndex, maxRowSum);
    printf("Column with the smallest sum: Index = %d, Sum = %d\n", minColIndex, minColSum);
    for (int i = 0; i < n; i++) 
    {
        free(array[i]);
    }
    free(array);

    return 0;
}