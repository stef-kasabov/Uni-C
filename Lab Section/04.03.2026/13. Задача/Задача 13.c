#include <stdio.h>
#include <stdlib.h>

/*
13.	Да се напише функция, която приема число и връща сумата на неговите цифри.
Пример: Вход: 234 → Изход: 9 (2 + 3 + 4)
*/

int main()
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}