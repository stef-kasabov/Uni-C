#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
11.	Създайте динамичен двумерен масив от цели числа с размери n и m, въведени от потребителя. Запълнете матрицата със стойности. 
Намерете сумата на всеки ред и запишете резултатите в едномерен динамичен масив. Запишете матрицата и масива със сумите в бинарен файл и ги 
прочетете обратно.
*/

int main ()
{
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int *arr = (int *)malloc(n * m * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i * m + j]);
        }
    }
    int *sums = (int *)malloc(n * sizeof(int));
    if (sums == NULL) 
    {
        printf("Memory allocation failed\n");
        free(arr);
        return 1;
    }
    for (int i = 0; i < n; i++) 
    {
        sums[i] = 0;
        for (int j = 0; j < m; j++) 
        {
            sums[i] += arr[i * m + j];
        }
    }

    FILE *file = fopen("matrix.bin", "wb");
    if (file == NULL) 
    {
        printf("Could not open file for writing\n");
        free(arr);
        free(sums);
        return 1;
    }
    fwrite(&n, sizeof(int), 1, file);
    fwrite(&m, sizeof(int), 1, file);
    fwrite(arr, sizeof(int), n * m, file);
    fwrite(sums, sizeof(int), n, file);

    fclose(file);

    file = fopen("matrix.bin", "rb");
    if (file == NULL) 
    {
        printf("Could not open file for reading\n");
        free(arr);
        free(sums);
        return 1;
    }

    int n_read, m_read;
    fread(&n_read, sizeof(int), 1, file);
    fread(&m_read, sizeof(int), 1, file);
    int *arr_read = (int *)malloc(n_read * m_read * sizeof(int));
    int *sums_read = (int *)malloc(n_read * sizeof(int));
    if (arr_read == NULL || sums_read == NULL) 
    {
        printf("Memory allocation failed\n");
        free(arr);
        free(sums);
        fclose(file);
        return 1;
    }
    fread(arr_read, sizeof(int), n_read * m_read, file);
    fread(sums_read, sizeof(int), n_read, file);
    fclose(file);

    printf("Matrix read from file:\n");
    for (int i = 0; i < n_read; i++)
    {
        for (int j = 0; j < m_read; j++) 
        {
            printf("%d ", arr_read[i * m_read + j]);
        }
        printf("\n");
    }
    printf("Sums of rows read from file:\n");
    for (int i = 0; i < n_read; i++) 
    {
        printf("%d ", sums_read[i]);
    }
    printf("\n");

    free(arr_read);
    free(sums_read);
    free(arr);
    free(sums);


    return 0;
}