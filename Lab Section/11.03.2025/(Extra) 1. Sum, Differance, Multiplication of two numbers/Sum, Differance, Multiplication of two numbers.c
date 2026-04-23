#include <stdio.h>

/*
1.	Да се въведат две цели числа A и B.
Да се напише функция, която трябва да:
•	намери сумата на числата
•	намери разликата между тях
•	намери произведението им
Резултатите, трябва да се отразят в main функцията!
*/

void calculate(int a, int b, int *sum, int *difference, int *product) 
{
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
}

int main() 
{
    int A, B;
    printf("Enter two integers (A and B): ");
    scanf("%d %d", &A, &B);
    
    int sum, difference, product;
    calculate(A, B, &sum, &difference, &product);
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    
    return 0;
}