#include <stdio.h>
#include <stdlib.h>

/*
3.	Да се напише програма, която чете 3 числа и отпечатва дали са еднакви (yes / no).
*/

int main() 
{
    int a, b, c;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) 
    {
        printf("yes\n");
    } else 
    {
        printf("no\n");
    }

    return 0;
}