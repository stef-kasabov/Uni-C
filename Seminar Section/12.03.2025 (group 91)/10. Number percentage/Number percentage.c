#include <stdio.h>

/*
10.	Дадени са n цели числа в интервала [1…1000]. От тях някакъв процент p1 са под 200, друг процент p2 са от 200 до 399, друг процент p3 са от 400 до 599, 
друг процент p4 са от 600 до 799 и останалите p5 процента са от 800 нагоре. Да се напише програма, която изчислява и отпечатва процентите p1, p2, p3, p4 и p5.
*/

int main ()
{
    int n, number;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &number);

        if (number < 200) 
        {
            count1++;
        } 
        else if (number >= 200 && number < 400) 
        {
            count2++;
        } 
        else if (number >= 400 && number < 600) 
        {
            count3++;
        } 
        else if (number >= 600 && number < 800) 
        {
            count4++;
        } 
        else 
        {
            count5++;
        }
    }

    double p1 = (double)count1 / n * 100;
    double p2 = (double)count2 / n * 100;
    double p3 = (double)count3 / n * 100;
    double p4 = (double)count4 / n * 100;
    double p5 = (double)count5 / n * 100;

    printf("Percentage of numbers under 200: %.2f%%\n", p1);
    printf("Percentage of numbers from 200 to 399: %.2f%%\n", p2);
    printf("Percentage of numbers from 400 to 599: %.2f%%\n", p3);
    printf("Percentage of numbers from 600 to 799: %.2f%%\n", p4);
    printf("Percentage of numbers from 800 and above: %.2f%%\n", p5);

    return 0;
}