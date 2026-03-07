#include <stdio.h>
#include <stdlib.h>

/*
14.	Градинар продавал реколтата от градината си на зеленчуковата борса. Продава зеленчуци за N лева на килограм и плодове за 
M лева за килограм. Напишете програма, която да пресмята приходите от реколтата в евро ( ако приемем, че едно евро е равно на 1.95лв). 
От конзолата се четат 4 числа, по едно на ред, въведени от потребителя:

  Първи ред – Цена за килограм зеленчуци – число с плаваща запетая
  Втори ред – Цена за килограм плодове – число с плаваща запетая
  Трети ред – Общо килограми на зеленчуците – цяло число
  Четвърти ред – Общо килограми на плодовете – цяло число
*/  

int main ()
{
    float priceVeg, priceFruit;
    int kgVeg, kgFruit;

    printf("Enter price per kilogram of vegetables: ");
    scanf("%f", &priceVeg);

    printf("Enter price per kilogram of fruits: ");
    scanf("%f", &priceFruit);

    printf("Enter total kilograms of vegetables: ");
    scanf("%d", &kgVeg);

    printf("Enter total kilograms of fruits: ");
    scanf("%d", &kgFruit);

    float totalRevenue = (priceVeg * kgVeg) + (priceFruit * kgFruit);
    float revenueInEuros = totalRevenue / 1.95;

    printf("Total revenue in euros: %.2f\n", revenueInEuros);

    return 0;
}