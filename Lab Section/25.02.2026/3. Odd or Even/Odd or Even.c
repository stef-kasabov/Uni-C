#include <stdio.h>
#include <stdlib.h>

//Задача: Напишете програма, която прочита цяло число и отпечатва дали е четно или нечетно.

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) 
    {
        printf("The number is even.\n");
    } 
    else 
    {
        printf("The number is odd.\n");
    }
    return 0;
}