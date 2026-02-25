#include <stdio.h>
#include <stdlib.h>

//Задача: Напишете програма, която прочита две цели числа от потребителя и отпечатва тяхната сума.

int main()
{
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
    return 0;
}
