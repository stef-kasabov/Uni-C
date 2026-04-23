#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
5.	Дадена е основна матрица A[m][n] и по-малка матрица B[p][q]. Програмата трябва да провери дали B се съдържа като подматрица в A (т.е. всички нейни елементи да са в точно тази форма някъде в A).

Пример:
Матрица A:
1 2 3 4 
5 6 7 8  
9 0 1 2  

Матрица B:
6 7  
0 1  

Изход:
Матрицата B се съдържа в A, започвайки от ред 1, колона 1.
*/

int main ()
{
    int m, n, p, q;
    int A[10][10], B[10][10];

    printf("Enter dimensions of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter dimensions of matrix B (p q): ");
    scanf("%d %d", &p, &q);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    bool found = false;
    int startRow = -1, startCol = -1;

    for (int i = 0; i <= m - p; i++) 
    {
        for (int j = 0; j <= n - q; j++) 
        {
            
            bool match = true;
            for (int x = 0; x < p; x++) 
            {
                for (int y = 0; y < q; y++) 
                {
                    if (A[i + x][j + y] != B[x][y]) 
                    {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }

            if (match) 
            {
                found = true;
                startRow = i;
                startCol = j;
                break; 
            }
        }
        if (found) break;
    }

    if (found) 
    {
        printf("\nMatrix B is contained in A, starting at row %d, column %d.\n", startRow, startCol);
    } 
    else 
    {
        printf("\nMatrix B is NOT contained in A.\n");
    }

    return 0;
}