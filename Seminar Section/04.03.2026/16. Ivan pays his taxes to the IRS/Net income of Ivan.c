#include <stdio.h>
#include <stdlib.h>

/* 
16.	Иван е програмист в американска компания и работи от вкъщи средно N дни в месеца като изкарва средно по M долара на ден. 
В края на годината Иван получава бонус, който е равен на 2.5 месечни заплати. От спечеленото през годината му се удържат 25% данъци. 
Напишете програма, която да пресмята, колко е чистата средна печалба на Иван на ден в лева, тъй като той харчи изкараното в България. 
Приема се, че в годината има точно 365 дни. Курсът на долара спрямо лева ще се чете от конзолата.
*/

/*
Вход	| Изход
21      |
75.00   |
1.59	| 74.61
*/

int main()
{
    int N;
    double M, exchangeRate;

    printf("Enter the average number of days Ivan works from home in a month: ");
    scanf("%d", &N);

    printf("Enter the average amount of money Ivan earns per day in dollars: ");
    scanf("%lf", &M);

    printf("Enter the exchange rate from dollars to leva: ");
    scanf("%lf", &exchangeRate);

    // Calculate total earnings for the year
    double monthlyEarnings = N * M; // Earnings per month
    double annualEarnings = monthlyEarnings * 12; // Earnings per year
    double bonus = 2.5 * monthlyEarnings; // Bonus
    double totalEarnings = annualEarnings + bonus; // Total earnings before tax

    // Calculate net earnings after tax
    double netEarnings = totalEarnings * 0.75; // After 25% tax

    // Convert net earnings to leva
    double netEarningsInLeva = netEarnings * exchangeRate;

    // Calculate average daily profit in leva
    double averageDailyProfitInLeva = netEarningsInLeva / 365;

    printf("The average daily profit for Ivan in leva is: %.2lf\n", averageDailyProfitInLeva);

    return 0;
}