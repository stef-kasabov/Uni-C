#include <stdio.h>
#include <stdlib.h>

/*
11.	Да се напише функция, която приема число и връща броя на неговите цифри.
Пример: 12345 → 5 цифри
*/

int main()
{
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    printf("The number has %d digits.\n", count);
    return 0;
}