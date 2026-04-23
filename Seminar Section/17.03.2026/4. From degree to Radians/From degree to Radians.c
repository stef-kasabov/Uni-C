#include <stdio.h>
#include <stdlib.h>

/*
4. Напишете конвертор от градуси в радиани.
*/

int main ()
{
    float degrees, radians;
    printf("Enter degrees: ");
    scanf("%f", &degrees);
    
    radians = degrees * (3.14159 / 180);
    printf("%.2f degrees is equal to %.2f radians.\n", degrees, radians);

    return 0;
}