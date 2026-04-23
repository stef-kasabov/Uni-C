#include <stdio.h>
#include <stdlib.h>

/*
5. Напишете конвертор от левове в долари, евро и паундове
*/

int main ()
{
    float leva, dollars, euros, pounds;
    printf("Enter amount in leva: ");
    scanf("%f", &leva);

    dollars = leva * 0.57; // 1 BGN = 0.57 dollars
    euros = leva * 0.49;   // 1 BGN = 0.49 euros
    pounds = leva * 0.42;  // 1 BGN = 0.42 pounds
    printf("%.2f leva is equivalent to:\n", leva);
    printf("%.2f dollars\n", dollars);
    printf("%.2f euros\n", euros);
    printf("%.2f pounds\n", pounds);
    
    return 0;
}