#include <stdio.h>

/*
4.	Да се въведе цяло положително число N.
Да се напише функция, която трябва да провери дали числото е палиндром (чете се еднакво отляво надясно и отдясно наляво).

Ако не е палиндром, да добави 1 към числото, докато стане палиндром.
Когато е палиндром, да се изведе неговата стойност, която е получена в main-a.
*/

int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int findNextPalindrome(int num) 
{
    while (!isPalindrome(num)) 
    {
        num++;
    }
    return num;
}

int main() 
{
    int N;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (isPalindrome(N) == 1)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        int palindrome = findNextPalindrome(N);
        printf("The next palindrome is: %d\n", palindrome);
    }
    
    return 0;
}