#include <stdio.h>
#include <stdlib.h>

/*
10.	Да се напише функция, която приема цяло число и връща 1, ако е просто, и 0, ако не е.
Пример: 
Вход: 7  Изход: 1 (Просто е)
Вход: 10  Изход: 0 (Не е просто)
*/

int main()
{
    int number, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}