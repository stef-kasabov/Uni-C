#include <stdio.h>
#include <stdlib.h>

/*
1.	Напишете програма, която динамично заделя памет за два масива от n и m числа, въведени от потребителя. 
Изчислете и изведете тяхната сума и средно аритметично.
*/

int main ()
{
    int n, m;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int *array1 = (int *)malloc(n * sizeof(int));
    int *array2 = (int *)malloc(m * sizeof(int));
    if (array1 == NULL || array2 == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers for the first array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter %d numbers for the second array:\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += array1[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum2 += array2[i];
    }

    double average1 = (double)sum1 / n;
    double average2 = (double)sum2 / m;

    printf("Sum of the first array: %d\n", sum1);
    printf("Average of the first array: %.2f\n", average1);

    printf("Sum of the second array: %d\n", sum2);
    printf("Average of the second array: %.2f\n", average2);
    
    free(array1);
    free(array2);

    return 0;
}