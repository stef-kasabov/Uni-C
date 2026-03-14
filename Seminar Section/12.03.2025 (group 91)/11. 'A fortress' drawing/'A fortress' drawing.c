#include <stdio.h>

/*
11.	Да се напише програма, която прочита от конзолата цяло число n, въведено от потребителя, и чертае крепост с ширина 2 * n колони и височина n реда като 
в примерите по-долу. Лявата и дясната колона във вътрешността си са широки n / 2.


вход	изход					
3	    /^\/^\
        |    |
        \_/\_/		


вход	изход	
4	    /^^\/^^\
        |      |
        |      |
        \__/\__/	


вход	изход
5	    /^^\__/^^\
        |        |
        |        |
        |   __   |
        \__/  \__/		


вход	изход
8	    /^^^^\____/^^^^\
        |               |
        |               |
        |               |
        |               |
        |               |   
        |     _____     |
        \____/     \____/

*/
void printChars(char c, int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("%c", c);
    }
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int towerWidth = n / 2;
    int bridgeWidth = 2 * n - (2 * towerWidth) - 4;

    printf("/");
    printChars('^', towerWidth);
    printf("\\");
    printChars('_', bridgeWidth);
    printf("/");
    printChars('^', towerWidth);
    printf("\\\n");

    for (int i = 0; i < n - 3; i++) 
    {
        printf("|");
        printChars(' ', 2 * n - 2);
        printf("|\n");
    }

    if (n > 2) 
    {
        printf("|");
        printChars(' ', towerWidth + 1);
        printChars('_', bridgeWidth);
        printChars(' ', towerWidth + 1);
        printf("|\n");
    }

    printf("\\");
    printChars('_', towerWidth);
    printf("/");
    printChars(' ', bridgeWidth);
    printf("\\");
    printChars('_', towerWidth);
    printf("/\n");

    return 0;
}