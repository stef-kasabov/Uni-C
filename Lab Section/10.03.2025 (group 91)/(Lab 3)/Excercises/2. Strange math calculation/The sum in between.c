#include <stdio.h>

/*
2.	Да се напише програма, която прочита от клавиатурата две цели числа и извежда сумата на числата между тези две числа. Въведените числа от клавиатурата не е 
задължително да са в ред по-малко, по-голямо. 
Вход: 2 7 
Изход: 18 Обяснение 3+4+5+6 = 18
*/

int main() {
    int num1, num2, sum = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1 + 1; i < num2; i++) {
        sum += i;
    }

    printf("The sum of numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}