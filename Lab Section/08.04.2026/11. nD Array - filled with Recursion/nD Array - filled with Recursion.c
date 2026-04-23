#include <stdio.h>
#include <stdlib.h>

/*
11.	Създайте динамичен n-мерен масив, като размерността n и размерите на всяко измерение се въвеждат от потребителя. 
Запълнете масива със стойности чрез рекурсивна функция. Намерете сумата на всички елементи.
*/

void fillArrayRecursive(int *arr, int total_elements, int current_index) 
{
    if (current_index >= total_elements) 
    {
        return;
    }
    
    printf("Enter value for element %d: ", current_index + 1);
    scanf("%d", &arr[current_index]);
    
    fillArrayRecursive(arr, total_elements, current_index + 1);
}

long long sumArrayRecursive(int *arr, int total_elements, int current_index) 
{
    if (current_index >= total_elements) 
    {
        return 0;
    }
    
    return arr[current_index] + sumArrayRecursive(arr, total_elements, current_index + 1);
}

int main() 
{
    int n;
    
    printf("Enter the number of dimensions (n): ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Dimensions must be greater than 0.\n");
        return 1;
    }

    int *dimension_sizes = (int*)malloc(n * sizeof(int));
    int total_elements = 1;

    for (int i = 0; i < n; i++) 
    {
        printf("Enter the size of dimension %d: ", i + 1);
        scanf("%d", &dimension_sizes[i]);
        
        if (dimension_sizes[i] <= 0) 
        {
            printf("Size must be positive.\n");
            free(dimension_sizes);
            return 1;
        }
        
        total_elements *= dimension_sizes[i];
    }

    int *arr = (int*)malloc(total_elements * sizeof(int));

    printf("\n--- Please fill the array ---\n");
    fillArrayRecursive(arr, total_elements, 0);

    long long total_sum = sumArrayRecursive(arr, total_elements, 0);

    printf("\nThe sum of all elements in the array is: %lld\n", total_sum);

    free(arr);
    free(dimension_sizes);

    return 0;
}