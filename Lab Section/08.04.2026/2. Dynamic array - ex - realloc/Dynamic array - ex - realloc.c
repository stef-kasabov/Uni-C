#include <stdio.h>
#include <stdlib.h>

/*
2.	Въведете динамичен масив от цели числа с размер n. След това въведете число k и вмъкнете k нови елемента на произволни позиции в масива, 
като използвате realloc при всяко вмъкване. Изведете крайния резултат.
*/

int main ()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of new elements to insert: ");
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int newElement, position;
        printf("Enter the new element and its position (0 to %d): ", n + i);
        scanf("%d %d", &newElement, &position);

        if (position < 0 || position > n + i) 
        {
            printf("Invalid position. Skipping this element.\n");
            continue;
        }

        arr = (int *)realloc(arr, (n + i + 1) * sizeof(int));
        if (arr == NULL) 
        {
            printf("Memory reallocation failed\n");
            return 1;
        }

        for (int j = n + i; j > position; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[position] = newElement;
    }
    printf("Final array:\n");
    for (int i = 0; i < n + k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}