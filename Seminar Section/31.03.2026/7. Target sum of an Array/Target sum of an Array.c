#include <stdio.h>
#include <stdlib.h>

/*
7 зад. Да се напише програма, която намира последователност от числа в
масив,които имат сума равна на число, въведено от потребителя(ако има такава).

Примерен масив : 4,3,1,4,2,5,8 и число 11
Изход: 4,2,5
*/

int main ()
{
    int n, target_sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);
    
    for (int start = 0; start < n; start++) 
    {
        int current_sum = 0;
        for (int end = start; end < n; end++) 
        {
            current_sum += arr[end];
            if (current_sum == target_sum) 
            {
                printf("Subarray with target sum %d found: ", target_sum);
                for (int k = start; k <= end; k++) 
                {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}