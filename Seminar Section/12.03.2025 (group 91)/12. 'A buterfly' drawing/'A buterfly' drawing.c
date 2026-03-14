#include <stdio.h>

/*
12.	Да се напише програма, която прочита от конзолата цяло число n, въведено от потребителя, и чертае пеперуда с ширина 2 * n - 1 колони и височина 2 * (n - 2) + 1 
реда като в примерите по-долу.  Лявата и дясната ѝ част са широки n - 1.
*/

//вход	изход
// 3	*\ /*
//        @
//      */ \*

//вход	 изход	 
// 5   ***\ /***
//     ---\ /---
//     ***\ /***
//         @
//     ***/ \***
//     ---/ \---
//     ***/ \***	 

//вход	   изход
// 7   *****\ /*****
//     -----\ /-----
//     *****\ /*****
//     -----\ /-----
//     *****\ /*****
//           @
//     *****/ \*****
//     -----/ \-----
//     *****/ \*****
//     -----/ \-----
//     *****/ \*****

void printWing(int width, int isEven) 
{
    for (int i = 0; i < width; i++) 
    {
        if (isEven) 
        {
            printf("*");
        } 
        else 
        {
            printf("-");
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);

    int wingWidth = n - 1;
    int halfHeight = n - 2;

    for (int i = 1; i <= halfHeight; i++) 
    {
        printWing(wingWidth, i % 2 != 0);
        printf("\\ /");
        printWing(wingWidth, i % 2 != 0);
        printf("\n");
    }

    for (int i = 0; i < wingWidth; i++)
    {
        printf(" ");
    }
    printf(" @\n");

    for (int i = 1; i <= halfHeight; i++) 
    {
        printWing(wingWidth, i % 2 != 0);
        printf("/ \\");
        printWing(wingWidth, i % 2 != 0);
        printf("\n");
    }

    return 0;
}