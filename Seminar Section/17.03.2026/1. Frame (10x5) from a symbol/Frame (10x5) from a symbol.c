#include <stdio.h>
#include <stdlib.h>

/*
1.	Напишете програма, която отпечатва рамка с размер 10х5 изградена от знак, въведен от потребителя:

expected input:
-

expected output:
----------
-        -
-        -
-        -
----------

*/

int main ()
{
    char symbol;
    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if ( i == 0 || i == 4 || j == 0 || j == 9)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}