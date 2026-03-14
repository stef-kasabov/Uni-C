#include <stdio.h>

/*
9.	От лозе с площ X квадратни метри се заделя 40% от реколтата за производство на вино. От 1 кв.м лозе се изкарват Y килограма грозде. За 1 литър вино са нужни 
2,5 кг. грозде. 
Желаното количество вино за продан е Z литра.
Напишете програма, която пресмята колко вино може да се произведе и дали това количество е достатъчно. Ако е достатъчно, остатъкът се разделя по равно между 
работниците на лозето.
*/

int main() 
{
    double X, Y, Z;
    int N;

    printf("Enter the area of the vineyard in square meters: ");
    scanf("%lf", &X);

    printf("Enter the amount of grapes produced per square meter (in kg): ");
    scanf("%lf", &Y);

    printf("Enter the desired amount of wine for sale (in liters): ");
    scanf("%lf", &Z);

    printf("Enter the number of workers: ");
    scanf("%d", &N);

    double total_grapes = X * Y;
    double wine_produced = (total_grapes * 0.4) / 2.5;

    if (wine_produced >= Z) 
    {
        printf("Sufficient wine produced: %.2lf liters\n", wine_produced);
        double excess_wine = wine_produced - Z;
        double wine_per_worker = excess_wine / N;
        printf("Each worker will get %.2lf liters of excess wine.\n", wine_per_worker);
    } 
    else 
    {
        printf("Insufficient wine produced. Need %.2lf more liters.\n", Z - wine_produced);
    }

    return 0;
}