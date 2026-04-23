#include <stdio.h>
#include <stdlib.h>

/*
6.	Създайте динамичен двумерен масив от цели числа. 
Намерете всички елементи, които се срещат повече от веднъж. Създайте едномерен масив без повторения, който съдържа тези елементи.
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

    int *unique = (int *)malloc(n * m * sizeof(int));
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int count = 0;
            for (int k = 0; k < n; k++) 
            {
                for (int l = 0; l < m; l++) 
                {
                    if (array[i][j] == array[k][l]) 
                    {
                        count++;
                    }
                }
            }
            if (count > 1) 
            {
                int exists = 0;
                for (int x = 0; x < uniqueCount; x++) 
                {
                    if (unique[x] == array[i][j]) 
                    {
                        exists = 1;
                        break;
                    }
                }
                if (!exists) 
                {
                    unique[uniqueCount++] = array[i][j];
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
        free(array[i]);
    }
    free(array);
    free(unique);
    return 0;
}