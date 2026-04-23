#include <stdio.h>
#include <stdlib.h>

/*
зад.2 Напишете програма, която чете динамичен масив с n числа и съзвдава нов масив, съдържащ само нечетните числа.
Този код трябва да има четно, нечетно, средно аритметично и да има край на програмата, когато потребителят въведе 0.
*/

int main ()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements (enter 0 to stop): ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) 
        {
            n = i;
            break;
        }
    }

    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            odd_count++;
        }
        else 
        {
            even_count++;
        }
    }

    int odd_arr[100];
    int odd_index = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            odd_arr[odd_index++] = arr[i];
        }
    }

    int even_arr[100];
    int even_index = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even_arr[even_index++] = arr[i];
        }
    }

    double average = 0;
    if (n > 0) 
    {
        int sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum += arr[i];
        }
        average = (double)sum / n;
    }
    printf("Average: %.2f\n", average);

    printf("Odd elements: ");
    for (int i = 0; i < odd_count; i++) 
    {
        printf("%d ", odd_arr[i]);
    }
    printf("\n");

    printf("Even elements: ");
    for (int i = 0; i < even_count; i++) 
    {
        printf("%d ", even_arr[i]);
    }
    printf("\n");


    return 0;
}