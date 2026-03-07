#include <stdio.h>
#include <stdlib.h>

/*
9.	По въведени параметри за лице на трапец пресметнете лицето му.
*/

int main()
{
    float a, b, h, area;
    printf("Enter the lengths of the parallel sides (a and b) and the height (h): ");
    scanf("%f %f %f", &a, &b, &h);
    area = (a + b) * h / 2;
    printf("The area of the trapezoid is: %.2f\n", area);
    return 0;
}