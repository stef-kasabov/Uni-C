#include <stdio.h>

/*
3.	Да се напише програма, която прочита от клавиатурата две числа и извежда сумата на четните числа и произведението на нечетните, които се намират между 
тези две числа. 
*/

int main()
{
    int num1, num2;
    int even_sum = 0;
    int odd_product = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1 + 1; i < num2; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } else {
            odd_product *= i;
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Product of odd numbers: %d\n", odd_product);

    return 0;
}