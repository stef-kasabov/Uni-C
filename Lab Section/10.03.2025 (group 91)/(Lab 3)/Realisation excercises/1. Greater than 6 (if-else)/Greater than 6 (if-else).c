#include <stdio.h>

/*
1.	Да се прочете от клавиатурата едно целочислено число и да се изведе съобщение, ако то е по-голямо от 6. 
*/

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 6) {
        printf("The number is greater than 6.\n");
    } else {
        printf("The number is not greater than 6.\n");
    }

    return 0;
}