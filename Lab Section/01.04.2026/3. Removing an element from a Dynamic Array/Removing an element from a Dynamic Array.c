#include <stdio.h>
#include <stdlib.h>

/*
3.	Напишете програма, която създава динамичен масив от n числа, след което потребителят въвежда число, което трябва да бъде премахнато (ако съществува). 
Програмата трябва да премести всички останали числа наляво и да намали размера на масива.
*/

int main ()
{
    int n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to remove: ");
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            arr[count++] = arr[i];
        }
    }

    arr = (int *)realloc(arr, count * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("The array after removing %d is:\n", x);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}