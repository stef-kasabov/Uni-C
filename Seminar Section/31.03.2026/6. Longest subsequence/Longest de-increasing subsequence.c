#include <stdio.h>
#include <stdlib.h>

/*
6 зад. За дадена редица от числа да се намери и отпечата най-дългата нарастваща (или намаляваща) под редица.
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

    int max_len = 1;
    int current_len = 1;
    int best_end_idx = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[i - 1]) 
        {
            current_len++;
        } else {
            if (current_len > max_len) 
            {
                max_len = current_len;
                best_end_idx = i - 1;
            }
            current_len = 1;
        }
    }
    printf("\nLongest increasing subsequence (length %d):\n", max_len);

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[i - 1]) 
        {
            current_len++;
        } else {
            if (current_len > max_len) 
            {
                max_len = current_len;
                best_end_idx = i - 1;
            }
            current_len = 1;
        }
    }

    if (current_len > max_len) 
    {
        max_len = current_len;
        best_end_idx = n - 1;
    }

    int start_idx = best_end_idx - max_len + 1;
    for (int i = start_idx; i <= best_end_idx; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}