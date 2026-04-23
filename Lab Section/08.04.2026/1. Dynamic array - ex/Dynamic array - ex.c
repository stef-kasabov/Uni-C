#include <stdio.h>
#include <stdlib.h>

/*
1.	Създайте динамичен едномерен масив от цели числа. Въведете елементите му от потребителя. Намерете минимален, максимален и средна стойност. 
Премахнете всички елементи, по-малки от средната стойност, като намалите размера на масива с realloc. Сортирайте получения масив.
*/

int main ()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    long long sum = 0;
    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    double avg = (double)sum / n;

    int new_n = 0;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] >= avg) 
        {
            arr[new_n++] = arr[i];
        }
    }
    arr = (int *)realloc(arr, new_n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    for (i = 0; i < new_n - 1; i++) 
    {
        for (int j = 0; j < new_n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", avg);
    printf("Filtered and sorted array: ");
    for (i = 0; i < new_n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
