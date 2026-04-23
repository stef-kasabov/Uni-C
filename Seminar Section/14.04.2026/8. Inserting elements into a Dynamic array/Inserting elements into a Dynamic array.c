#include <stdio.h>
#include <stdlib.h>

/*
8з. Потребителя въвежда 10 числа в динамичен масив. След това въвежда числа, като с
всяко въведено число указва индекса, където да бъде вмъкнато това число (числото
избутва останалите). Въвеждането спира при вход 0 .

Примерен вход: 5 1 3 6 2 6 4 7 2 9 // първоначални данни

77 0 //число позиция
33 2
88 5
0

Изход: 77 5 33 1 3 88 6 2 6 4 7 2 9
*/

int main ()
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
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int num, pos;
    while (1) 
    {
        printf("Enter a number and its position (0 to stop): ");
        scanf("%d", &num);
        if (num == 0) 
        {
            break;
        }
        scanf("%d", &pos);
        if (pos < 0 || pos > n) 
        {
            printf("Invalid position. Try again.\n");
            continue;
        }

        arr = (int *)realloc(arr, (n + 1) * sizeof(int));
        if (arr == NULL) 
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        for (int i = n; i > pos; i--) 
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = num;
        n++;
    }

    printf("Resulting array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}