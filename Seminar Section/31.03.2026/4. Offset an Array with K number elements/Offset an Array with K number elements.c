#include <stdio.h>
#include <stdlib.h>

/*
4зад. Напишете програма, която получава редица с N цели числа. След това получава
цяло число К. Отместете всички елементи на редицата с К позиции, като използвате
правилото за превъртане (когато елемент от последна позиция трябва да се измести
то той трябва да отиде на първа позиция в редицата).
*/

int main ()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the number of positions to offset: ");
    scanf("%d", &k);
    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    k = k % n; // Handle cases where k is greater than n

    for (int i = 0; i < k; i++) 
    {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) 
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("The new array is: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}