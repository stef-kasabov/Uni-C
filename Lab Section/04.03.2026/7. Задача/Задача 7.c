#include <stdio.h>
#include <stdlib.h>

/* 
7.	Да се въведат числа, докато потребителят не въведе 0.
o	След това програмата трябва да изведе брой въведени числа, тяхната сума и средноаритметичното им.
*/

int main() 
{
    int count = 0;
    double sum = 0.0;
    double number;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%lf", &number);
        if (number == 0) {
            break;
        }
        sum += number;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Count of numbers entered: %d\n", count);
        printf("Sum of numbers: %.2lf\n", sum);
        printf("Average: %.2lf\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}