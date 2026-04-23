#include <stdio.h>

/*
3.	Да се прочетат от клавиатурата 3 числа и да се изведе на екрана най-малкото от тях. 
*/

int main() {
    int num1, num2, num3;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    int min = num1;

    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("The smallest number is: %d\n", min);

    return 0;
}