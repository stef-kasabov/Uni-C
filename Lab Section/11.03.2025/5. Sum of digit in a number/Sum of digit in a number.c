#include <stdio.h>

/*
5.	Да се напише функция, която приема число и връща сумата на неговите цифри.
Пример: Вход: 234 → Изход: 9 (2 + 3 + 4)
*/


int sumOfDigits(int number) 
{
    int sum = 0;
    if (number == 0) 
    {
        return 0;
    }
    while (number != 0) 
    {
        sum += number % 10; 
        number /= 10;
    }
    return sum;
}

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = sumOfDigits(number);
    printf("Output: %d\n", result);
    
    return 0;
}