#include <stdio.h>
#include <stdlib.h>

/*
зад.1 Kапишете програма, каято създава динамичен масив с първоначален размер n, въведен от потребителя. Позволете на потребителя да въвежда елементи в масива. 
Ако масивътсе зъпълни, удвоете неговия размер и продължете да добавяте елементи, като продължаването на удвояване на елементи трябва да бъде...

...прекратено, когато потребителят въведе специална стойност (например -1) или когато масивът достигне определен максимален размер (например 1000 елемента).
*/

int main ()
{
    int n;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    int arr [1000];

    int count = 0;
    int element;
    printf("Enter elements (enter -1 to stop): ");
    while (count < n && scanf("%d", &element) == 1 && element != -1) //-1 може да е и 0, ако искаме да спрем въвеждането
    {
        arr[count] = element;
        count++;
        if (count == n) 
        {
            n *= 2;
            printf("Array resized to %d elements.\n", n);
        }
    }

    printf("Elements in the array: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}