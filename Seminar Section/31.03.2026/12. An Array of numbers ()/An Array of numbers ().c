#include <stdio.h>
#include <stdlib.h>

/*
12зад. Напишете програма, която получава две числа (множител и брой). Трябва да
се създаде масив с дължина дадения брой, който съдържа само цели числа, които
са кратни на дадения множител. Числата трябва да са само положителни и трябва
да са подредени във възходящ ред, започвайки от стойността на множителя.

Примерен вход: 2, 5
Изход: 2, 4, 6, 8, 10
*/

int main ()
{
    int multiplier, count;
    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);
    printf("Enter the count: ");
    scanf("%d", &count);

    int arr[100];
    for (int i = 0; i < count; i++) 
    {
        arr[i] = multiplier * (i + 1);
    }

    printf("The array of multiples is: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}