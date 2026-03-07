#include <stdio.h>
#include <stdlib.h>

/*
8.	Да се напише програма, която извежда всички числа на Фибоначи до дадено N.
Пример: N = 50 → 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

int main()
{
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    int a = 1, b = 1;
    printf("Fibonacci numbers up to %d:\n", N);
    while (a <= N) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");

    return 0;
}