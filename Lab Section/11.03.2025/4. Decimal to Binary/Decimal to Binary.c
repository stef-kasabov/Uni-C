#include <stdio.h>

/*
4.	Да се напише функция, която конвертира десетично число в двоично.
Пример: Вход: 13 → Изход: 1101
*/

void decimalToBinary(int n) 
{
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() 
{
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary representation: ");
    decimalToBinary(decimalNumber);
    printf("\n");

    return 0;
}