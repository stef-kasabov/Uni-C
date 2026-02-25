#include <stdio.h>
#include <stdlib.h>

//Задача: Въведете от клавиатурата 4 цифрено цяло число и да намерят сумата от цифрите на числото- без цикъл да се направи.

int main() 
{
    int number, sum = 0;
    printf("Enter a 4-digit integer: ");
    scanf("%d", &number);
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    printf("Sum of digits: %d\n", sum);
    return 0;
}