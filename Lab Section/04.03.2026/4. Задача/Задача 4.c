#include <stdio.h>
#include <stdlib.h>

/* 
4.	Да се напише програма, която проверява дали дадено число е палиндром.
Число е палиндром, ако се чете еднакво отляво надясно и отдясно наляво.
Пример:
o	Вход: 121 → Изход: Числото е палиндром.
o	Вход: 123 → Изход: Числото не е палиндром.
*/

int main()
{
    int number, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}