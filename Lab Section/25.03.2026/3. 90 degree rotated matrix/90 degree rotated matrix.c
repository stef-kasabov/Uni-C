#include <stdio.h>
#include <stdlib.h>

/*
3.	Дадена е квадратна матрица n x n. Създай нова матрица, която е получена чрез завъртане на оригиналната на 90° по часовниковата стрелка.
*/

int main ()
{
    int n;
    int matrix[10][10];
    int rotated[10][10];

    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    printf("\nMatrix after 90 degree clockwise rotation:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d\t", rotated[i][j]);
        }
        printf("\n");
    }
    return 0;
}