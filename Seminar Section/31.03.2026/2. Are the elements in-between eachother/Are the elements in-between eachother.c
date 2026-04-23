#include <stdio.h>
#include <stdlib.h>

/*
2зад. Да се напише програма, която проверява дали между елементите на
редицата a_0, a_1, ... , a_n са изпълнени релациите: a_0 < a_1 > a_2 < a_3 ...
(въвеждат се N и елементите на редицата)
*/

int main ()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int is_alternating = 1;
    for (int i = 1; i < n - 1; i++) 
    {
        if ((i % 2 == 1 && arr[i] <= arr[i - 1]) || (i % 2 == 0 && arr[i] >= arr[i - 1])) 
        {
            is_alternating = 0;
            break;
        }
    }

    if (is_alternating) 
    {
        printf("The sequence satisfies the alternating relationship.\n");
    } 
    else 
    {
        printf("The sequence DOES NOT satisfy the alternating relationship.\n");
    }

    return 0;
}