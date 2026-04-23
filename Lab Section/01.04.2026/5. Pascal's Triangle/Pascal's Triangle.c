#include <stdio.h>
#include <stdlib.h>

/*
5.	Напишете програма, която динамично заделя памет за триъгълна матрица, представяща първите n реда от триъгълника на Паскал.
*/

int main() {
    int n, i, j;

    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int **pascal = (int **)malloc(n * sizeof(int *));
    if (pascal == NULL) 
    {
        return 1; 
    }

    for (i = 0; i < n; i++) 
    {
        pascal[i] = (int *)malloc((i + 1) * sizeof(int));
        
        if (pascal[i] == NULL) return 1;

        for (j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                pascal[i][j] = 1;
            } 
            else 
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    printf("\nPascal's Triangle (%d rows):\n", n);
    for (i = 0; i < n; i++) 
    {
        for (int space = 0; space < n - i; space++) printf("  ");
        
        for (j = 0; j <= i; j++) 
        {
            printf("%4d", pascal[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) 
    {
        free(pascal[i]);
    }
    free(pascal);

    return 0;
}