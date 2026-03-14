#include <stdio.h>

/*
1.	Напишете функция, която получава две числа и връща по – голямото от тях. Направете същото и за по -  малкото. 
Демонстрирайте работата на функциите като четете множество числа до въвеждане на 0 и изкарате най – голямото въведено и най-малкото въведено число.
*/

int max(int a, int b) 
{
    if (a > b) 
    {
        return a;
    } else 
    {
        return b;
    }
}


int min(int a, int b) 
{
    if (a < b) 
    {
        return a;
    } else 
    {
        return b;
    }
}

int main() 
{
    int num, largest, smallest;

    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("No numbers entered.\n");
        return 0;
    }

    largest = num;
    smallest = num;

    while (1) 
    {
        scanf("%d", &num);
        if (num == 0) 
        {
            break;
        }
        largest = max(largest, num);
        smallest = min(smallest, num);
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}