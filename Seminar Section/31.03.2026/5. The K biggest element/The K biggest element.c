#include <stdio.h>
#include <stdlib.h>

/*
5зад. Дадена е редица с N цели числа. Да cе намери K-тия по големина елемент в редицата.
*/

int main ()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter which (position) element to find: ");
    scanf("%d", &k);
    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] < arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The %d-th largest element is: %d\n", k, arr[k - 1]);

    return 0;
}