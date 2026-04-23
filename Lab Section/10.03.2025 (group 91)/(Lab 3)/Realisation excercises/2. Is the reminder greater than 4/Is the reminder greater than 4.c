#include <stdio.h>

/*
2.	Да се прочете от клавиатурата едно целочислено число и да се изведе на екрана съобщение, ако остатъкът от делението му с 8 е по-голям от 4. 
*/

int main ()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 8 > 4) {
        printf("The remainder of the division of the number by 8 is greater than 4.\n");
    } else {
        printf("The remainder of the division of the number by 8 is not greater than 4.\n");
    }

    return 0;
}