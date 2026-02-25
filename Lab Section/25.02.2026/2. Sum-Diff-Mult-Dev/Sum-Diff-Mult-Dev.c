#include <stdio.h>
#include <stdlib.h>

//Задача: Напишете програма, която прочита две числа и извежда тяхната сума, разлика, произведение и частно.

int main() 
{
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if (b != 0) {
        printf("Quotient: %.2f\n", (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}