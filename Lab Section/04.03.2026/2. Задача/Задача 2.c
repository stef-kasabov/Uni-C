#include <stdio.h>
#include <stdlib.h>

/* 
2.	Да се прочетат три числа и да се изведе дали могат да бъдат дължините на триъгълник.
o	Проверете дали a + b > c, a + c > b и b + c > a.
o	Ако могат, изведете вида на триъгълника: равностранен, равнобедрен или разностранен.

*/

int main ()
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || a == c || b == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The numbers cannot be the lengths of a triangle.\n");
    }
}