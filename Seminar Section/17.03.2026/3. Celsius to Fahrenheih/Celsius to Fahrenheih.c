#include <stdio.h>
#include <stdlib.h>

/*
3.	Напишете програма, която чете градуси по скалата на Целзий и ги превръща в градуси по Фаренхайт
*/

int main()
{
    float celsius, fahrenheit;
    printf("Enter the degrees in Celsius:");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}