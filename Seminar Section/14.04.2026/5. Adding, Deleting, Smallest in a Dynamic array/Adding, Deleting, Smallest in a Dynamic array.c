#include <stdio.h>
#include <stdlib.h>

/*
5з. Наум пише софтуер за малки деца, който има следните команди:
1: add(x) - добавяне на елемент Х към съществуващите до момента
2: delete(x) - изтрива всички срещания на елемента Х
3: smallest(x) принтира Х тото най-малко число от наличните
Помогнете на Наум да напише своя софтуер, ако знаете, че Х е цяло число. Използвайте
динамична памет.
*/

int add (int **arr, int size, int a)
{
    *arr = realloc(*arr, (size + 1) * sizeof(int));
    (*arr)[size] = a;
    return size + 1;
}

int delete (int **arr, int size, int a)
{
    int newSize = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*arr)[i] != a)
        {
            (*arr)[newSize] = (*arr)[i];
            newSize++;
        }
    }
    *arr = realloc(*arr, newSize * sizeof(int));
    return newSize;
}

int smallest (int *arr, int size, int a)
{
    if (a > size)
    {
        printf("Not enough elements in the array.\n");
        return -1;
    }
    int *copy = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        copy[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (copy[j] > copy[j + 1])
            {
                int temp = copy[j];
                copy[j] = copy[j + 1];
                copy[j + 1] = temp;
            }
        }
    }
    int result = copy[a - 1];
    free(copy);
    return result;
}

int main ()
{
    int size, command, x, i;
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {   
        printf("Enter command (1 for add, 2 for delete, 3 for smallest) [0 to exit]: ");
        scanf("%d", &command);

        if(command == 1)
        {
            printf("Enter the value of x: ");
            scanf("%d", &x);

            size = add(&arr, size, x);

            printf("The new array is: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        if(command == 2)
        {
            printf("Enter the value of x: ");
            scanf("%d", &x);

            size = delete(&arr, size, x);

            printf("The updated array is: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        if (command == 3)
        {
            printf("Enter the value of x: ");
            scanf("%d", &x);

            int result = smallest(arr, size, x);
            if (result != -1)
            {
                printf("The %d-th smallest element is: %d\n", x, result);
            }
            printf("\n");
        }
        else if (command == 0)
        {
            break;
        }
    
    }
    
    free(arr);

    return 0;
}