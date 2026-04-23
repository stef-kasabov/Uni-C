#include <stdio.h>

/*
2.	Да се напише функция, която приема цяло число и връща 1, ако е просто, и 0, ако не е.
Пример: 
Вход: 7  Изход: 1 (Просто е)
Вход: 10  Изход: 0 (Не е просто)
*/

int is_prime(int num) 
{
    if (num <= 1) 
    {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = is_prime(number);
    printf("Output: %d\n", result);
    
    return 0;
}