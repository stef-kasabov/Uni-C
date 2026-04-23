#include <stdio.h>
#include <stdlib.h>

/*
9зад. Напишете програма, която намира максималната редица от
последователни еднакви елементи в масив и ги отпечатва.

Примерен вход: 2 1 1 2 3 3 2 2 2 1
Изход : 2 2 2

Сканирате масива . Всеки път, когато текущото число е различно от следващото от
него започва нова поредица, а всеки път когато текущото число съвпада със
следващото, то е продължение на текущата поредица.
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

    int max_length = 1;
    int current_length = 1;
    int max_element = arr[0];

    for (int i = 1; i < n; i++) 
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
                max_element = arr[i - 1];
            }
            current_length = 1;
        }
    }

    if (current_length > max_length) 
    {
        max_length = current_length;
        max_element = arr[n - 1];
    }

    printf("Maximum sequence of identical elements: ");
    for (int i = 0; i < max_length; i++) 
    {
        printf("%d ", max_element);
    }
    printf("\n");


    return 0;
}