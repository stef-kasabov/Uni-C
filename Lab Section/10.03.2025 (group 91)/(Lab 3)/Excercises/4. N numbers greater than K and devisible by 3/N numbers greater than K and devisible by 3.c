#include <stdio.h>

/*
4.	Да се напише програма, при която се въвеждат две числа N и К. След това се въвеждат още N числа и се извежда броят на числата, които са по-големи от 
K и се делят на 3. 
*/

int main ()
{
    int N, K, count = 0;
    printf("Enter N and K: ");
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (num > K && num % 3 == 0) {
            count++;
        }
    }

    printf("Count of numbers greater than %d and divisible by 3: %d\n", K, count);
    
    return 0;
}