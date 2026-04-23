#include <stdio.h>

/*
1.	Да се напише функция, която приема две числа и връща тяхното най-голямо общо делител (НОД).
Пример: НОД(48, 18) = 6
*/

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}