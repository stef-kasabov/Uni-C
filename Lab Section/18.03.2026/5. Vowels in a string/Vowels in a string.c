#include <stdio.h>
#include <stdlib.h>

/*
5.	Напишете функция, която връща броя на гласните в низ. 
*/

int main ()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            count++;
        }
    }

    printf("Number of vowels in the string: %d\n", count);
    return 0;
}