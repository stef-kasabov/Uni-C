#include <stdio.h>
#include <stdlib.h>

/*
8 зад. Потребителя въвежда 10 числа в масив от 20 елемента. След това въвежда
числа, като с всяко въведено число указва индекса, където да бъде вмъкнато това
число (числото избутва останалите) . Въвеждането спира при вход 0 (нула) или при
запълване на масива.

Примерен вход: 5 1 3 6 2 6  // първоначални данни
//число позиция
//77     0
//33     2
//88     5
//0

Изход: 77 5 33 1 3 88 6 2 6
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

    int number, position;
    while (1) 
    {
        printf("Enter a number and its position (0 to stop): ");
        scanf("%d", &number);
        if (number == 0) 
        {
            break;
        }
        scanf("%d", &position);

        if (position < 0 || position >= 20) 
        {
            printf("Invalid position. Try again.\n");
            continue;
        }

        for (int i = n; i > position; i--) 
        {
            arr[i] = arr[i - 1];
        }

        arr[position] = number;
        n++;
        
        if (n >= 20) 
        {
            printf("Array is full. Stopping input.\n");
            break;
        }
    }

    printf("Final array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
