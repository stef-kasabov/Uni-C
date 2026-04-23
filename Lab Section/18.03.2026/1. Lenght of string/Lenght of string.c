#include <stdio.h>
#include <stdlib.h>

/*
1.	Напишете функция, която намира дължината на низ без да ползвате вградените. 
*/

int string_length(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}

int main() 
{
    const char *myString = "Hello, World!";
    int length = string_length(myString);
    printf("The length of the string is: %d\n", length);
    return 0;
}