#include <stdio.h>
#include <stdlib.h>

/*
4.	Напишете програма, която сравнява два низа без да ползвате вградените функции 
*/

int main ()
{
    char str1[100], str2[100];
    int i = 0, areEqual = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            areEqual = 0;
            break;
        }
        i++;
    }

    if (areEqual && str1[i] == '\0' && str2[i] == '\0') 
    {
        printf("The strings are equal.\n");
    } else 
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}