#include <stdio.h>

/*
4.	Да се прочете от клавиатурата цифра и да се изведе на екрана нейното име. Да се използва оператор switch-case.
*/

int main() 
{
    int intiger;

    printf("Enter a digit from 1 to 9: \n");
    scanf("%d", &intiger);

    switch (intiger) 
    {
        case 0:
            printf("You've entered the digit: Z E R O\n");
            break;
        case 1:
            printf("You've entered the digit: O N E\n");
            break;
        case 2:
            printf("You've entered the digit: T W O\n");
            break;
        case 3:
            printf("You've entered the digit: T H R E E\n");
            break;
        case 4:
            printf("You've entered the digit: F O U R\n");
            break;
        case 5:
            printf("You've entered the digit: F I V E\n");
            break;
        case 6:
            printf("You've entered the digit: S I X\n");
            break;
        case 7:
            printf("You've entered the digit: S E V E N\n");
            break;
        case 8:
            printf("You've entered the digit: E I G H T\n");
            break;
        case 9:
            printf("You've entered the digit: N I N E\n");
            break;
        default:
            printf("Error: Digit out of scope!");
            break;
    }

    return 0;
}