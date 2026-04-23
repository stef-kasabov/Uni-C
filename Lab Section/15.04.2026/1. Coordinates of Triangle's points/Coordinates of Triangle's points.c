#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1.	Съставете структура за точка в пространството. Направете масив от точки и ги попълнете с данни. 
Направете триъгълници със зададените точки и намерете страните на триъгълниците.
*/

struct Point 
{
    float x;
    float y;
};

struct Triangle 
{
    struct Point p1;
    struct Point p2;
    struct Point p3;
};

float distance(struct Point a, struct Point b) 
{
    return sqrt((b.x - a.x) * (b.x - a.x) + 
                (b.y - a.y) * (b.y - a.y));
}

int main() 
{
    struct Triangle triangle;
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%f %f", &triangle.p1.x, &triangle.p1.y);
    printf("Enter the coordinates of the second point (x y): ");
    scanf("%f %f", &triangle.p2.x, &triangle.p2.y);
    printf("Enter the coordinates of the third point (x y): ");
    scanf("%f %f", &triangle.p3.x, &triangle.p3.y);

    float side1 = distance(triangle.p1, triangle.p2);
    float side2 = distance(triangle.p2, triangle.p3);
    float side3 = distance(triangle.p3, triangle.p1);

    printf("The sides of the triangle are: %.2f, %.2f, %.2f\n", side1, side2, side3);

    return 0;
}