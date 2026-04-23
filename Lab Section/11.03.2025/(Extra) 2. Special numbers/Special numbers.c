#include <stdio.h>

/*
2.	Да се напише функция, която проверява дали число се счита за специално, ако:
•	сумата на неговите цифри е четно число
•	и произведението на цифрите е по-голямо от 35.
След това да се напише функция, която прави така, че ако числото не е специално, трябва:
•	да увеличи числото с най-голямата му цифра.
*/

int sumOfDigits(int number) 
{
    int sum = 0;
    while (number != 0) 
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int productOfDigits(int number) 
{
    int product = 1;
    while (number != 0) 
    {
        product *= number % 10;
        number /= 10;
    }
    return product;
}

int isSpecial(int number) 
{
    return (sumOfDigits(number) % 2 == 0) && (productOfDigits(number) > 35);
}

int largestDigit(int number) 
{
    int largest = 0;
    while (number != 0) 
    {
        int digit = number % 10;
        if (digit > largest) 
        {
            largest = digit;
        }
        number /= 10;
    }
    return largest;
}

int makeSpecial(int number) 
{
    if (!isSpecial(number)) 
    {
        number += largestDigit(number);
    }
    return number;
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isSpecial(number)) 
    {
        printf("%d is a special number.\n", number);
    } 
    else 
    {
        int newNumber = makeSpecial(number);
        printf("%d is not a special number. After making it special: %d\n", number, newNumber);
    }

    return 0;
}