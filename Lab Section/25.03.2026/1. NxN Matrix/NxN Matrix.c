#include <stdio.h>
#include <stdlib.h>

/*
1.	Попълнете масив NxN елемента и го попълнете с числа. 

•	Изкарайте елементите на главния диагонал
•	Изкарайте елементите на второстепенния диагонал
•	Изведете елементите над главния диагонал
•	Изведете елементите под главния диагонал
*/

int main ()
{
    /* Dynamic matrix (but in theory)
    int n;
    print("Enter the size of the table...N: ");
    scanf("%d", &n);

    int matrix_c [10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Fill in the table with element [%d][%d]", i, j);
            scanf("%d", matrix_c [i][j]);
        }
    }

    printf("The table's contetnt: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matrix_c[3][3]);
        }
        printf("\n");
    }

    printf("Elements on the main diagonal: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", matrix_c[i][i]);
    }
       
    printf("Elements on the secondary diagonal: \n"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d", matrix_c[i][n - 1 - i]);
    }    
    printf("\n");

    printf("Elements above the main diagonal: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            printf("%d", matrix_c[i][j]);
        }
        printf("\n");
    }

    printf("Elements below the main diagonal: \n");
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", matrix_c[i][j]);
        }
        printf("\n");
    }

    return 0;
    */

    int matrix_c [3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    printf("The table's contetnt: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Elements on the main diagonal: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", matrix_c[i][i]);
    }
    printf("\n");

    printf("Elements on the secondary diagonal: \n"); 
    for (int i = 0; i < 3; i++)
    {
        printf("%d", matrix_c[i][3 - 1 - i]);
    }    
    printf("\n");

    printf("Elements above the main diagonal: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            printf("%d", matrix_c[i][j]);
        }
        printf("\n");
    }

    printf("Elements below the main diagonal: \n");
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", matrix_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}