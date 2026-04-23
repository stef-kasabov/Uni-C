#include <stdio.h>
#include <stdlib.h>

/*
10зад. Дадена е редицата от цели числа a_0, a_1,a_2, .... a_{n-1},(n>1) и цяло число x. Да
се напише програма, която намира колко пъти x се съдържа в редицата. Броят на
числата в редицата и техните стойности се въвеждат от клавиатурата.
*/

int main ()
{
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int arr[100];
    printf("Enter the elements of the array: ");
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            count++;
        }
    }

    printf("The number %d appears %d times in the array.\n", x, count);

    return 0;
}