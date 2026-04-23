#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
2.	Направете програма, която проверява дали един квадрат е магически(сумите на числата във всички редове и колони да е равна на едно и също число). 
*/

int main ()
{
    int n;
    int matrix[10][10];
    
    printf("Enetr the size of the Square (N): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int targetSum = 0;
    for (int j = 0; j < n; j++) 
    {
        targetSum += matrix[0][j];
    }

    bool isMagic = true;

    for (int i = 1; i < n; i++) 
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++) 
        {
            rowSum += matrix[i][j];
        }

        if (rowSum != targetSum) 
        {
            isMagic = false;
            break;
        }
    }


    if (isMagic) {

        for (int j = 0; j < n; j++) 
        {
            int colSum = 0;
            for (int i = 0; i < n; i++) 
            {
                colSum += matrix[i][j];
            }
            if (colSum != targetSum) 
            {
                isMagic = false;
                break;
            }
        }
    }

    if (isMagic) 
    {
        printf("\nThe Square is magical! (Sum: %d)\n", targetSum);
    } 
    else 
    {
        printf("\nThe Square is NOT magical! (womp!).\n");
    }
    return 0;
}