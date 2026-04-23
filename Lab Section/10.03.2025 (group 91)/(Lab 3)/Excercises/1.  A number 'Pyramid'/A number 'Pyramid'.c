#include <stdio.h>

/*
1.	Да се напише програма, която прочита от клавиатурата едно цяло число и изкарва числова пирамида: 
1 
2 2 
3 3 3 
..... 
*/

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}