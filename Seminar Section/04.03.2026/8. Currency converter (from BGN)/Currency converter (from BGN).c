#include <stdio.h>
#include <stdlib.h>

/*
8.	Напишете конвертор от левове в долари, евро и паундове
*/

int main()
{
    float leva, dollars, euros, pounds;
    const float DOLLAR_RATE = 1.75f;
    const float EURO_RATE = 1.95f;
    const float POUND_RATE = 2.25f;

    printf("Enter amount in Bulgarian Leva: ");
    scanf("%f", &leva);

    dollars = leva / DOLLAR_RATE;
    euros = leva / EURO_RATE;
    pounds = leva / POUND_RATE;

    printf("%.2f Bulgarian Leva is equal to:\n", leva);
    printf("%.2f US Dollars\n", dollars);
    printf("%.2f Euros\n", euros);
    printf("%.2f British Pounds\n", pounds);

    return 0;
}