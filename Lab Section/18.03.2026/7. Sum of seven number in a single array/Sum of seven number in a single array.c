#include <stdio.h>
#include <stdlib.h>

/*
7.	Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив. Програмата да изведе общата сума на въведените числа.

Пример: 89, -123, 45, 196, 1204, 0, 112
Изход: 1523
*/

int main ()
{
    int arr[7];
    int sum = 0;

    printf("Enter 7 integers in the range [-5000..5000]:\n");
    for (int i = 0; i < 7; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < -5000 || arr[i] > 5000) 
        {
            printf("Invalid input. Please enter a number in the range [-5000..5000].\n");
            return 1;
        }
        sum += arr[i];
    }

    printf("The total sum of the entered numbers is: %d\n", sum);
    return 0;
}