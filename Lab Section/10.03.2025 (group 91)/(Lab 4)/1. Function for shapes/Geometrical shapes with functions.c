#include <stdio.h>
#include <math.h>

/*
Да се напише програма, в която се въвежда цяло число, което представлява код на геометрична фигура – 1 – квадрат, 2 – правоъгълник, 3 – правоъгълен триъгълник,
4 – окръжност. След това се въвеждат размерите на избраната геометрична фигура. Програмата трябва да изведе типа на геометричната фигура, както и нейното лице. 
За пресмятането на лицето да се напишат подходящи функции, (които да се извикват от главната функция).
*/

void square(float a) 
{
    float area = a * a;
    float perimeter = 4 * a;
    printf("Square: Area = %.2f, Perimeter = %.2f\n", area, perimeter);
}

void rectangle(float a, float b) 
{
    float area = a * b;
    float perimeter = 2 * (a + b);
    printf("Rectangle: Area = %.2f, Perimeter = %.2f\n", area, perimeter);
}

void right_triangle(float a, float b) 
{
    float area = 0.5 * a * b;
    float perimeter = a + b + sqrt(a * a + b * b);
    printf("Right Triangle: Area = %.2f, Perimeter = %.2f\n", area, perimeter);
}

void circle(float r) 
{
    float area = 3.14159 * r * r;
    float circumference = 2 * 3.14159 * r;
    printf("Circle: Area = %.2f, Circumference = %.2f\n", area, circumference);
}

int main()
{
    int shape_code;
    printf("Enter shape code (1 - square, 2 - rectangle, 3 - right triangle, 4 - circle): ");
    scanf("%d", &shape_code);

    switch (shape_code) {
        case 1: {
            float a;
            printf("Enter side length of the square: ");
            scanf("%f", &a);
            square(a);
            break;
        }
        case 2: {
            float a, b;
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &a, &b);
            rectangle(a, b);
            break;
        }
        case 3: {
            float a, b;
            printf("Enter the two legs of the right triangle: ");
            scanf("%f %f", &a, &b);
            right_triangle(a, b);
            break;
        }
        case 4: {
            float r;
            printf("Enter radius of the circle: ");
            scanf("%f", &r);
            circle(r);
            break;
        }
        default:
            printf("Invalid shape code.\n");
    }

    return 0;
}