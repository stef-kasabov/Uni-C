#include <stdio.h>
#include <stdlib.h>

/*
10.	Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив. Програмата да изведе числото, което е най-близко 
до средната стойност на въведените числа и къде се намира.

Пример: 1,2,3,4,5,6,7
Изход: средна стойност 4, най-близка стойност 4 на 4-то място
*/

int main ()
{
    int arr[7];
    int sum = 0;
    double average;
    int closest;
    int closest_index;

    printf("Enter 7 integers in the range [-5000..5000]:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (double)sum / 7;

    closest = arr[0];
    closest_index = 0;
    for (int i = 1; i < 7; i++) {
        if (abs(arr[i] - average) < abs(closest - average)) {
            closest = arr[i];
            closest_index = i;
        }
    }

    printf("Average: %.2f\n", average);
    printf("Closest value: %d at position %d\n", closest, closest_index + 1);

    return 0;
}