#include <stdio.h>
#include <stdlib.h>

/*
1з. Даден е двумерен масив NxM запълнен с цели числа. Проверете дали всеки ред
съдържа числа, подредени в нарастващ ред, а всяка колона съдържа числа подредени в
намаляващ ред.
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

    int isValid = 1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 1; j < m; j++) 
        {
            if (arr[i][j] <= arr[i][j - 1]) 
            {
                isValid = 0;
                break;
            }
        }
        if (!isValid) 
        {
            break;
        }
    }

    if (isValid) 
    {
        for (int j = 0; j < m; j++) 
        {
            for (int i = 1; i < n; i++) 
            {
                if (arr[i][j] >= arr[i - 1][j]) 
                {
                    isValid = 0;
                    break;
                }
            }
            if (!isValid) 
            {
                break;
            }
        }
    }

    if (isValid) 
    {
        printf("\nThe array satisfies the conditions.\n");
    } 
    else 
    {
        printf("\nThe array does not satisfy the conditions.\n");
    }

    return 0;
}
