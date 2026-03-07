#include <stdio.h>
#include <stdlib.h>

/*
7.	Напишете конвертор от градуси в радиани
*/

int main()
{
    double degrees, radians;
    const double PI = 3.14159265358979323846;

    printf("Enter degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * (PI / 180.0);

    printf("%.2lf degrees is equal to %.4lf radians.\n", degrees, radians);

    return 0;
}