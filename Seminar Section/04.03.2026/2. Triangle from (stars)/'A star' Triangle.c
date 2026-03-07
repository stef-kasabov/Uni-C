#include <stdio.h>
#include <stdlib.h>

/*
2.	Напишете програма, която отпечатва триъгълник от 55 звездички:
*/

int main ()
{
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
expected output:
*
**
***
****
*****
******
*******
********
*********
**********

*/