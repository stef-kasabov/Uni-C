#include <stdio.h>
#include <stdlib.h>

/*
3.	Напишете програма, която изкарва колко пъти се среща всяка буква в низ 
*/

int main ()
{
    char str[100];
    int count[26] = {0};
    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            count[str[i] - 'a']++;
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            count[str[i] - 'A']++;
        }
    }

    printf("Letter counts:\n");

    for (int i = 0; i < 26; i++) 
    {
        if (count[i] > 0) 
        {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}