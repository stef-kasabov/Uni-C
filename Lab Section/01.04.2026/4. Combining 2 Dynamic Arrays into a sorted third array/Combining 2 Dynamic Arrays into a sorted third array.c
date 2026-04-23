#include <stdio.h>
#include <stdlib.h>

/*
4.	Напишете програма, която динамично създава два масива с размери n и m, въведени от потребителя. 
След това програмата трябва да обедини двата масива в трети масив и да го сортира във възходящ ред.
*/

int main ()
{
    int n, m;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(m * sizeof(int));
    int *arr = (int *)malloc((n + m) * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers for the first array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d numbers for the second array:\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr[n + i] = arr2[i];
    }

    for (int i = 0; i < n + m - 1; i++)
    {
        for (int j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The merged and sorted array is:\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}