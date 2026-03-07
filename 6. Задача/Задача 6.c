#include <stdio.h>
#include <stdlib.h>

/*
6.	Да се въведе число N и да се намери най-голямата цифра в него.
o	Пример: N = 39572 → Най-голямата цифра е 9.
*/

int main()
{
    int N, maxDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (N > 0) {
        int digit = N % 10; // Get the last digit
        if (digit > maxDigit) {
            maxDigit = digit; // Update maxDigit if current digit is greater
        }
        N /= 10; // Remove the last digit
    }

    printf("The largest digit is: %d\n", maxDigit);
    return 0;
}