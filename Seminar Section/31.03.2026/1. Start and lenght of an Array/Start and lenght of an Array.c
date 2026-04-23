#include <stdio.h>
#include <stdlib.h>

/*
1зад. Всяка редица от равни числа в едномерен сортиран масив, се нарича
площадка. Да се напише програма, която намира началото и дължината на
най-дългата площадка в даден сортиран във възходящ ред едномерен масив
(въвеждат се N и самият масив от потребителя).
*/

int main ()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array [sorted]: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    //Sort the array (if needed) 
    //for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++) 
    //     {
    //         if (arr[j] > arr[j + 1]) 
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    int max_length = 1;
    int current_length = 0;
    int current_start_index = 0;
    int start_index = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == arr[i - 1]) 
        {
            current_length++;
        } 
        else 
        {
            if (current_length > max_length) 
            {
                max_length = current_length;
                start_index = current_start_index;
            }
            current_length = 1;
            current_start_index = i;
        }
    }
    
    if (current_length > max_length) 
    {
        max_length = current_length;
        start_index = current_start_index;
    }


    printf("\nStart index: %d\n", start_index);
    printf("Length: %d\n", max_length);

    return 0;
}