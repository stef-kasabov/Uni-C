#include <stdio.h>
#include <stdlib.h>

/*
2з. Даден е масив NxМ запълнен с цели числа. Намерете числото, което има околни на
него сбора, на които е най-голям. (околно е всяко число което се намира до, над, под или
по диагонал на текущото на отстояние не повече от 1 поле).
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

    int maxSum = 0;
    int maxNum = arr[0][0];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int sum = 0;
            for (int x = -1; x <= 1; x++) 
            {
                for (int y = -1; y <= 1; y++) 
                {
                    if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < m) 
                    {
                        sum += arr[i + x][j + y];
                    }
                }
            }
            if (sum > maxSum) 
            {
                maxSum = sum;
                maxNum = arr[i][j];
            }
        }
    }

    printf("The number with the largest surrounding sum is: %d\n", maxNum);
    printf("The largest surrounding sum is: %d\n", maxSum);

    return 0;
}