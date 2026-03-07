#include <stdio.h>
#include <stdlib.h>

/* 
5.	Да се въведат две цели числа A и B и да се изведе сумата на всички числа между тях, които са кратни на 3.
o	Пример: A = 5, B = 15 → Резултат: 6 + 9 + 12 + 15 = 42
*/

int main()
{
    int A, B, sum = 0;

    printf("Enter two integers A and B: ");
    scanf("%d %d", &A, &B);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (int i = A + 1; i < B; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("Sum of numbers between %d and %d that are divisible by 3: %d\n", A, B, sum);

    return 0;
}