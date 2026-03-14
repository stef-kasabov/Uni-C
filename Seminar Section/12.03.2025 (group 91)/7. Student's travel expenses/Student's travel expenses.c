#include <stdio.h>

/*
7.	Студент трябва да пропътува n километра. Той има избор измежду три вида транспорт:
●	Такси. Начална такса: 0.70 лв. Дневна тарифа: 0.79 лв. / км. Нощна тарифа: 0.90 лв. / км.
●	Автобус. Дневна / нощна тарифа: 0.09 лв. / км. Може да се използва за разстояния минимум 20 км.
●	Влак. Дневна / нощна тарифа: 0.06 лв. / км. Може да се използва за разстояния минимум 100 км.
Напишете програма, която чете броя километри n и период от деня (ден-D или нощ-N), въведени от потребителя,  и изчислява цената на най-евтиния транспорт.
*/

double calculate_taxi_price(double n, char period) 
{
    double base_price = 0.70;
    double rate;
    if (period == 'D') 
    {
        rate = 0.79;
    } 
    else if (period == 'N') 
    {
        rate = 0.90;
    } 
    else 
    {
        printf("Invalid period of the day.\n");
        return -1;
    }
    return base_price + rate * n;
}

double calculate_bus_price(double n) 
{
    return 0.09 * n;
}

double calculate_train_price(double n) 
{
    return 0.06 * n;
}

int main() 
{
    double n;
    char period;

    printf("Enter the distance in kilometers: ");
    scanf("%lf", &n);

    printf("Enter the period of the day (D for day, N for night): ");
    scanf(" %c", &period);

    double taxi_price = calculate_taxi_price(n, period);
    double bus_price = calculate_bus_price(n);
    double train_price = calculate_train_price(n);

    double min_price = taxi_price;

    if (bus_price < min_price && n >= 20) 
    {
        min_price = bus_price;
    }

    if (train_price < min_price && n >= 100) 
    {
        min_price = train_price;
    }

    printf("The cheapest transport price is: %.2lf\n", min_price);

    return 0;
}


/*
int main() {
    double n;
    char period;

    printf("Enter the distance in kilometers: ");
    scanf("%lf", &n);

    printf("Enter the period of the day (D for day, N for night): ");
    scanf(" %c", &period);

    double taxi_price, bus_price, train_price;

    if (period == 'D') 
    {
        taxi_price = 0.70 + 0.79 * n;
        bus_price = 0.09 * n;
        train_price = 0.06 * n;
    } 
    else if (period == 'N') 
    {
        taxi_price = 0.70 + 0.90 * n;
        bus_price = 0.09 * n;
        train_price = 0.06 * n;
    } 
    else 
    {
        printf("Invalid period of the day.\n");
        return 1;
    }

    double min_price = taxi_price;

    if (bus_price < min_price && n >= 20) 
    {
        min_price = bus_price;
    }

    if (train_price < min_price && n >= 100) 
    {
        min_price = train_price;
    }

    printf("The cheapest transport price is: %.2lf\n", min_price);

    return 0;
}
*/