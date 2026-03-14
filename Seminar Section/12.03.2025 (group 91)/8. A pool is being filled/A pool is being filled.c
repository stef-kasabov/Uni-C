#include <stdio.h>

/*
8.	Басейн с обем V(кубични  метра) има две тръби от които се пълни. Всяка тръба има определен дебит (литрите вода минаващи през една тръба за един час). 
Работникът пуска тръбите едновременно и излиза за N часа. Напишете програма, която изкарва състоянието на басейна, в момента, когато работникът се върне. 
*/

int main() {
    double V, d1, d2;
    int N;

    printf("Enter the volume of the pool (in cubic meters): ");
    scanf("%lf", &V);

    printf("Enter the flow rate of the first pipe (in liters per hour): ");
    scanf("%lf", &d1);

    printf("Enter the flow rate of the second pipe (in liters per hour): ");
    scanf("%lf", &d2);

    printf("Enter the number of hours the worker is away: ");
    scanf("%d", &N);

    double flow_rate1 = d1 / 1000; 
    double flow_rate2 = d2 / 1000;

    double total_water_added = (flow_rate1 + flow_rate2) * N;

    double remaining_volume = V - total_water_added;

    if (remaining_volume > 0) 
    {
        printf("The pool is not full. Remaining volume: %.2lf cubic meters\n", remaining_volume);
    } 
    else if (remaining_volume == 0) 
    {
        printf("The pool is exactly full.\n");
    } 
    else 
    {
        printf("The pool overflowed by %.2lf cubic meters\n", -remaining_volume);
    }

    return 0;
}