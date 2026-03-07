#include <stdio.h>
#include <stdlib.h>

/*  
1.	Да се прочете от клавиатурата цяло число и да се изведе дали:
o	Е четно или нечетно.
o	Е положително, отрицателно или нула.
o	Се дели едновременно на 3 и 5.

*/

int main ()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Check if the number is divisible by both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5.\n");
    } else {
        printf("The number is not divisible by both 3 and 5.\n");
    }

    return 0;
}
