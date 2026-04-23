#include <stdio.h>
#include <stdlib.h>

/*
11зад. Да се напише програма, която в масив до 100 елемента намира най-малкият
и най-големият елемент и техните индекси в масива. Размерността на масива и
стойностите на елементите се въвеждат от клавиатурата.
*/

int main ()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int min_element = arr[0];
    int max_element = arr[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min_element) 
        {
            min_element = arr[i];
            min_index = i;
        }
        if (arr[i] > max_element) 
        {
            max_element = arr[i];
            max_index = i;
        }
    }

    printf("Minimum element: %d, Index: %d\n", min_element, min_index);
    printf("Maximum element: %d, Index: %d\n", max_element, max_index);

    return 0;
}