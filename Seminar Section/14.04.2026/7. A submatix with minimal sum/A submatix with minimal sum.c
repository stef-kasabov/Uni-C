#include <stdio.h>
#include <stdlib.h>

/*
73. Да се напише програма, която създава правоъгълна матрица с размер n на m.
Размерността и стойностите за елементите се въвеждат от клавиатурата. Да се намери
подматрица с размер 3х3, която има минимална сума. Принтирайте подматрицата.
*/

int main ()
{
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int arr[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int min_sum = 999999;
    int min_row = 0, min_col = 0;
    for (int i = 0; i < n - 2; i++) 
    {
        for (int j = 0; j < m - 2; j++) 
        {
            int sum = 0;
            for (int k = 0; k < 3; k++) 
            {
                for (int l = 0; l < 3; l++) 
                {
                    sum += arr[i + k][j + l];
                }
            }
            if (sum < min_sum) 
            {
                min_sum = sum;
                min_row = i;
                min_col = j;
            }
        }
    }
    printf("The 3x3 submatrix with the minimum sum is:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", arr[min_row + i][min_col + j]);
        }
        printf("\n");
    }
    printf("Minimum sum: %d\n", min_sum);
    
    return 0;
}