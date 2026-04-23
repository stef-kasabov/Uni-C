#include <stdio.h>

/*
7.	Напишете програма, която намира сумата, разликата, умножението и делението на две числа чрез указателите им.
*/

int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    int sum = *ptr1 + *ptr2;
    int difference = *ptr1 - *ptr2;
    int product = (*ptr1) * (*ptr2);
    float quotient = (float)(*ptr1) / (*ptr2);
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    
    return 0;
}