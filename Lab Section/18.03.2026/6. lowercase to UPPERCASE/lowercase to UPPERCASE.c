#include <stdio.h>
#include <stdlib.h>

/*
6.	Напишете програма, която заменя малките букви в низ с големи
*/

int main ()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("String with uppercase letters: %s", str);
    return 0;
}