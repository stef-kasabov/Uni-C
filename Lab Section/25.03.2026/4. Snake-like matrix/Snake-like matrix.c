#include <stdio.h>
#include <stdlib.h>

/*
4.	Да се създаде матрица m x n, която се запълва със стойности от 1 до m*n по следния начин:
•	първият ред – отляво надясно
•	вторият ред – отдясно наляво
•	третият ред – отляво надясно
    [   .   .   .   ]
*/

int main ()
{
    int m, n;
    int matrix[10][10]; 
    int counter = 1;

    printf("Enter number of row (m): ");
    scanf("%d", &m);
    printf("Enetr number of colums (n): ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++) 
    {
        if (i % 2 == 0) 
        {
            for (int j = 0; j < n; j++) 
            {
                matrix[i][j] = counter++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) 
            {
                matrix[i][j] = counter++;
            }
        }
    }

    printf("\nSnake-like matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}