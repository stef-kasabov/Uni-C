#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
12.	По дадени координатите на три точки, не лежащи на една права, намерете лицето на триъгълника, формиран от тях.
*/

int main ()
{
    double x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter coordinates of point C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double area = 0.5 * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    printf("The area of the triangle is: %lf\n", area);

    return 0;
}