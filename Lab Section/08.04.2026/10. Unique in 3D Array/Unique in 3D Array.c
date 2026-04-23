#include <stdio.h>
#include <stdlib.h>

/*
10.	Създайте динамичен тримерен масив от цели числа. 
Намерете всички елементи, които се срещат повече от веднъж в целия масив. Запишете ги в едномерен масив без повторения.
*/

int main ()
{
    int n, m, k;
    printf("Enter the dimensions of the array (n m k): ");
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

    printf("Enter the elements of the array:\n");
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

    int *unique = (int *)malloc(n * m * k * sizeof(int));
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            for (int l = 0; l < k; l++) 
            {
                int count = 0;
                for (int x = 0; x < n; x++) 
                {
                    for (int y = 0; y < m; y++) 
                    {
                        for (int z = 0; z < k; z++) 
                        {
                            if (array[i][j][l] == array[x][y][z]) 
                            {
                                count++;
                            }
                        }
                    }
                }
                if (count > 1) 
                {
                    int exists = 0;
                    for (int u = 0; u < uniqueCount; u++) 
                    {
                        if (unique[u] == array[i][j][l]) 
                        {
                            exists = 1;
                            break;
                        }
                    }
                    if (!exists) 
                    {
                        unique[uniqueCount++] = array[i][j][l];
                    }
                }
            }
        }
    }

    printf("Elements that occur more than once:\n");
    for (int i = 0; i < uniqueCount; i++) 
    {
        printf("%d ", unique[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);
    free(unique);

    return 0;
}