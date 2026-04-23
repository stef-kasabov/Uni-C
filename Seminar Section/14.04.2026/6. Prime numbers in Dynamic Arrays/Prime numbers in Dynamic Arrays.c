#include <stdio.h>
#include <stdlib.h>

/*
63. Създайте динамичен масив от цели числа с n на брой елементи,като n и стойностите
на елементите се четат от клавиатурата. Изтрийте простите числа от този масив и
създайте втори динамичен масив, в който ги записвате. Принтирайте двата масива.
*/

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %i elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //write the code, based on the comment on lines 4-8, here
    int *arr_prime = (int *)malloc(n * sizeof(int));
    if (arr_prime == NULL) 
    {
        printf("Memory allocation failed\n");
        free(arr);
        return 1;
    }

    int prime_count = 0;
    int non_prime_count = 0;

    for (int i = 0; i < n; i++)
    {
        int is_prime = 1;
        if (arr[i] < 2) 
        {
            is_prime = 0;
        } 
        else 
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0) 
                {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime) 
        {
            arr_prime[prime_count++] = arr[i];
        }
        else 
        {
            arr[non_prime_count++] = arr[i];
        }
    }
    
    printf("Updated array:\n");
    for (int i = 0; i < non_prime_count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nPrime numbers array:\n");
    for (int i = 0; i < prime_count; i++)
    {
        printf("%d ", arr_prime[i]);
    }
    free(arr);
    free(arr_prime);
    return 0;
}