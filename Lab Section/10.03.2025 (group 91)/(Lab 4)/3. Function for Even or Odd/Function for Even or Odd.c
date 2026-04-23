#include <stdio.h>

/*
Напишете функция, която проверява дали конкретно число е четно или нечетно. 
*/

int isEven(int number) 
{
    return number % 2 == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isEven(num)) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    
    return 0;
}