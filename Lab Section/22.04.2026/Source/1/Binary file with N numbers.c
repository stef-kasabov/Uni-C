#include <stdio.h>
#include <stdlib.h>

/*
1. В двoичен файл имате цяло число N и след него N цели числа. 
а)  Да се напише програма, която създава файла. 
б)  Да се напише програма, която изкарва на екрана броя на четните и броя на нечетните цифри от така дадените N числа. 
в)  Да се напише програма, която прочита така подадения масив от N елемента и изкарва в текстови файл сортирания по възходящ ред масив. 
*/

int main()
{
    FILE *file = fopen("numbers.bin", "wb+");
    if (file == NULL) 
    {
        printf("Cannot open file.\n");
        return 1;
    }

    /*
    int N, a_int;
    scanf("%d", &N);
    printf("%d\n", N);
    fwrite(&N, sizeof(int), 1, file);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &a_int);
        fwrite(&a_int, sizeof(int), 1, file);
    }
    fclose(file);
    */

    int N, a_int;
    srand((unsigned)time(NULL)); // Seed the random number generator
    N = rand() % 100 + 1;   // Generate a random number between 1 and 100 for N
    printf("%d\n", N);
    fwrite(&N, sizeof(int), 1, file);
    for (int i = 0; i < N; i++) 
    {
        a_int = rand() % 100;   // Generate a random number between 0 and 99
        fwrite(&a_int, sizeof(int), 1, file);
    }
    fclose(file);

    file = fopen("numbers.bin", "rb");
    if (file == NULL) 
    {
        printf("Cannot open file.\n");
        return 1;
    }

    fread(&N, sizeof(int), 1, file);
    int *arr = (int *)malloc(sizeof(int) * N);
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }
    for (int i = 0; i < N; i++) 
    {
        fread(&arr[i], sizeof(int), 1, file);
    }

    printf("Numbers read from file:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    fclose(file);
    
    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < N; i++) 
    {
        if (arr[i] % 2 == 0) 
            even_count++;
        else 
            odd_count++;
    }
    
    printf("\nEven numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);

    
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    FILE *txt_file = fopen("sorted_numbers.txt", "w");
    if (txt_file == NULL) 
    {
        printf("Cannot open text file.\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < N; i++) 
    {
        fprintf(txt_file, "%d ", arr[i]);
    }

    fclose(txt_file);
    free(arr);
    return 0;
}

/* Alternatively writen way: [using random numbers]
Създайте двоичен файл (.bin), който съдържа цяло число N и след него N на брой цели числа.
В програмата, тярбва да съсздадете този файл, да го запълните с произволни числа, за размер и стойности на числата, и да затворите файла.
След това, отворете файла за четене, прочетете числата и ги изведете на екрана.
Изкарайте четните и нечетните числа от файла, като ги преброите и изведете броя им на екрана.
Създайте текстов файл (.txt), който съдържа сортираните по възходящ ред числа от двоичния файл. 
*/