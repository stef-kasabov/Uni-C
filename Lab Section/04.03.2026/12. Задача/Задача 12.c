#include <stdio.h>
#include <stdlib.h>

/*
12.	Да се напише функция, която конвертира десетично число в двоично.
Пример: Вход: 13 → Изход: 1101
*/

int main()
{
    int decimal, binary = 0, base = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d\n", binary);

}