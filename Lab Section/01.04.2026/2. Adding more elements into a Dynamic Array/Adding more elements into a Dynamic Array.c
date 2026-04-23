#include <stdio.h>
#include <stdlib.h>

/*
2.	Напишете програма, която първоначално заделя памет за n елемента. След това потребителят решава дали да добави още m елемента. 
Ако да, използвайте realloc() за разширяване на паметта и въведете новите стойности.
*/

int main ()
{
    int n, m;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    char choice;
    printf("Do you want to add more elements? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') 
    {
        printf("Enter the number of additional elements: ");
        scanf("%d", &m);

        int *temp = (int *)realloc(arr, (n + m) * sizeof(int));
        if (temp == NULL) 
        {
            printf("Memory reallocation failed\n");
            free(arr);
            return 1;
        }
        arr = temp;

        printf("Enter %d additional elements:\n", m);
        for (int i = n; i < n + m; i++) 
        {
            scanf("%d", &arr[i]);
        }
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("The elements are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);

    return 0;
}