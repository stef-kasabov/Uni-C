#include <stdio.h>

/*
3.	Да се напише функция, която приема число и връща броя на неговите цифри.
Пример: 12345 → 5 цифри
*/

int countDigits(int number)
{
    int count = 0;
    if (number == 0) 
    {
        return 1; 
    }
    while (number != 0) 
    {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int digits = countDigits(number);
    printf("The number of digits in %d is: %d\n", number, digits);
    
    return 0;
}