#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
3.	Да се въведе цяло число N и да се напише функция, която трябва да провери дали цифрите на числото са подредени в нарастващ ред (отляво надясно).
Пример:
1237 → да
1225 → да
532 → не
След това да се напише функция, която прави така, че ако числото не е нарастващо, функцията трябва:
•	да промени оригиналното число по някакъв ваш начин.
*/

bool is_ascending(int n) 
{
    if (n < 0) 
    {
        n = -n;
    }
    
    int last_digit = 10; 
    
    while (n > 0) 
    {
        int current_digit = n % 10;

        if (current_digit > last_digit) 
        {
            return false;
        }
        
        last_digit = current_digit;
        n = n / 10;
    }
    return true;
}

void fix_number(int *n) 
{
    if (is_ascending(*n) == true) 
    {
        return;
    }

    int temp;
    if (*n < 0) 
    {
        temp = -(*n);
    } 
    else 
    {
        temp = *n;
    }

    int reversed_n = 0;
    while (temp > 0) 
    {
        int digit = temp % 10;
        reversed_n = reversed_n * 10 + digit;
        temp = temp / 10;
    }

    if (*n < 0) 
    {
        *n = -reversed_n;
    } 
    else 
    {
        *n = reversed_n;
    }
}

int main() {
    int n;
    printf("Enter number N: ");
    scanf("%d", &n);

    if (is_ascending(n)) 
    {
        printf("%d -> Yes (the digits are in ascending order)\n", n);
    } 
    else 
    {
        printf("%d -> No\n", n);
        fix_number(&n);
        printf("Fixed number (reversed): %d\n", n);
    }

    return 0;
}