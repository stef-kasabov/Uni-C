#include <stdio.h>

/*
6.	Да се напише програма, която прочита от клавиатурата две реални числа и извежда стойностите на фукция f(x) = x*x-4 за всички стойности в 
дадения интервал. Стъпката на обхождане е 0.01
*/

int main ()
{
    float a, b;
    printf("Enter two real numbers: ");
    scanf("%f %f", &a, &b);
    
    for (float x = a; x <= b; x += 0.01) {
        float f_x = x * x - 4;
        printf("f(%.2f) = %.2f\n", x, f_x);
    }
    
    return 0;
}