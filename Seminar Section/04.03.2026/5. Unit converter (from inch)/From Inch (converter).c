#include <stdio.h>
#include <stdlib.h>

/*
5.	Напишете програма, която конвертира от въведени от потребителя инчове в мм,см,дм и м. 
Напишете подходящ интерфейс за общуване с потребителя.
*/

int main()
{
    float inches, mm, cm, dm, m;

    printf("Enter the length in inches: ");
    scanf("%f", &inches);

    mm = inches * 25.4;
    cm = inches * 2.54;
    dm = inches * 0.254;
    m = inches * 0.0254;

    printf("%.2f inches is equal to:\n", inches);
    printf("%.2f mm\n", mm);
    printf("%.2f cm\n", cm);
    printf("%.2f dm\n", dm);
    printf("%.2f m\n", m);

    return 0;
}