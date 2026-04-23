#include <stdio.h>
#include <stdlib.h>

/*
2. В двоичен файл имате цели числа (не е указано колко на брой). 
а)  Да се напише програма, която създава файла. 
б)  Да се напише програма, която изкарва на екрана броя на четните и броя на нечетните цифри от така дадените N числа. 
в)  Да се напише програма, която прочита така подадения масив от N елемента и изкарва в текстови файл сортирания по възходящ ред масив. 
*/

int main()
{
    /*File "numbers.bin" is from task 1 and contains the last saved data. This time, we try to find it's size. */

    FILE *file = fopen("numbers.bin", "rb");
    if (file == NULL) 
    {
        printf("Cannot open file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    int N = file_size / sizeof(int);
    printf("%d\n", N);
    int *arr = (int *)malloc(sizeof(int) * N);
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }
    fseek(file, 0, SEEK_SET);
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

    
    // Sort the array
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

/*
Alternatively writen task description:
Създайте двоичен файл (.bin),който има цели числа (не указано колко на брой). 
В програмата, тярбва да съсздадете този файл, да го запълните с произволни числа, за размер и стойности на числата, и да затворите файла.
След това, отворете файла за четене, прочетете числата и ги изведете на екрана.
Изкарайте четните и нечетните числа от файла, като ги преброите и изведете броя им на екрана.
Създайте текстов файл (.txt), който съдържа сортираните по възходящ ред числа от двоичния файл. 
*/