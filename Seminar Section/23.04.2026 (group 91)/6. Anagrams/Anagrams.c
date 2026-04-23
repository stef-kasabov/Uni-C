#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6.Напишете функция, която проверява дали два низа са анаграма. Функцията има два параметъра ,двата низа 
и връща като резултат 1 ако низовете са анаграма и 0 ако не са.
Пояснение -  анаграма е дума или фраза, образувана от буквите на друга дума или фраза 

Например    listen=silent  ,  peach = cheap,   players = parsley
*/

int areAnagrams(const char *str1, const char *str2) {
    int count[256] = {0};

    for (const char *p = str1; *p; p++) 
    {
        count[(unsigned char)*p]++;
    }

    for (const char *p = str2; *p; p++) 
    {
        count[(unsigned char)*p]--;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (areAnagrams(str1, str2)) 
    {
        printf("The strings are anagrams.\n");
    } 
    else 
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}