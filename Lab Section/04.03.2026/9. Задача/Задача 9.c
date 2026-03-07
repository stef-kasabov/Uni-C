#include <stdio.h>
#include <stdlib.h>

/*
9.	Да се напише функция, която приема две числа и връща тяхното най-голямо общо делител (НОД).
Пример: НОД(48, 18) = 6
*/
    
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    
    printf("GCD is: %d\n", a);
    
    return 0;
}