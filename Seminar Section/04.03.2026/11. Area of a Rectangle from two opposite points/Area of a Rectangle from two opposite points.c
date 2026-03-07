#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
11.	По дадени координатите на два срещуположни ъгъла на правоъгълник чрез точки А и Б, 
намерете лицето на правоъгълника, който е ограничен от двете точки.
*/

int main()
{
    double x1, y1, x2, y2;
    printf("Enter coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;

    printf("The area of the rectangle is: %lf\n", area);

    return 0;
}

/*
fabs() is a function from the math library that returns the absolute value of a number. 
In this code, it is used to calculate the width and height of the rectangle by taking the absolute difference between 
the x-coordinates and y-coordinates of points A and B, respectively. This ensures that we get a positive value for width and 
height, regardless of the order in which the points are entered.
*/