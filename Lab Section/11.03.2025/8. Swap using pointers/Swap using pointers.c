#include <stdio.h>

/*
8.	Напиши програма, която:
a.	Декларира две цели числа.
b.	Декларира два указателя и ги насочва към тези числа.
c.	Разменя стойностите на двете числа, използвайки само указателите (без допълнителни променливи от тип int).
d.	Извежда стойностите преди и след размяната.
*/

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2); 
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}