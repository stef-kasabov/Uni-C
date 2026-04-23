#include <stdio.h>

/*
5.	Да се напише програма, която при въвеждането на произволен брой числа извежда сборът им. За край на въвеждането се приема въвеждането на 0. 
*/

int main()
{
    float number, sum = 0;

    printf("Enter numbers (0 to end):\n");

    while (1) {
        scanf("%f", &number);
        if (number == 0) {
            break;
        }
        sum += number;
    }

    printf("The sum of the numbers is: %.2f\n", sum);

    return 0;
}