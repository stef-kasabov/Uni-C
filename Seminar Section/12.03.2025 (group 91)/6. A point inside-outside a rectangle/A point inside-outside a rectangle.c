#include <stdio.h>

/*
6.	Напишете програма, която проверява дали точка {x, y} се намира вътре в правоъгълник {x1, y1} – {x2, y2}. Входните данни се четат от конзолата и се 
състоят от 6 реда, въведени от потребителя: десетичните числа x1, y1, x2, y2, x и y (като се гарантира, че x1 < x2 и y1 < y2). Една точка е вътрешна 
за даден правоъгълник, ако се намира някъде във вътрешността му или върху някоя от страните му. Отпечатайте “Inside” или “Outside”.
*/

int main() 
{
    double x1, y1, x2, y2, x, y;
    
    printf("Enter the coordinates of the rectangle (x1 y1 x2 y2):\n");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    printf("Enter the coordinates of the point (x y):\n");
    scanf("%lf %lf", &x, &y);
    
    if (x > x1 && x < x2 && y > y1 && y < y2) {
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }
    
    return 0;
}