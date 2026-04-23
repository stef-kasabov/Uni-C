#include <stdio.h>

/*
Напишете функция, която превръща от десетично в двоично едно число.
*/

void decimalToBinary(int n) 
{
    int binaryNum[32];
    int i = 0;
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() 
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    decimalToBinary(num);
    
    return 0;
}