#include <stdio.h>
#include <stdlib.h>

/*
4.Напишете програма, която кодира информацията в текстов файл символ по символ с ключ въведен от 
потребителя и записва кодираното съдържание в друг файл. 
Ключът е цяло число между 2 и 10. Името на файла, който ще бъде кодиран се чете от клавиатурата.
*/

int main ()
{
    char fileName[100];
    int key;

    printf("Enter the name of the file to encode: ");
    scanf("%s", fileName);

    printf("Enter the key (between 2 and 10): ");
    scanf("%d", &key);
    if (key < 2 || key > 10) 
    {
        printf("Invalid key. Please enter a number between 2 and 10.\n");
        return 1;
    }

    FILE *inputFile = fopen(fileName, "r");
    if (inputFile == NULL)
    {
        printf("Could not open file %s for reading.\n", fileName);
        return 1;
    }

    char outputFileName[100];

    strcpy(outputFileName, "encoded_");
    strcat(outputFileName, fileName);


    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL)
    {
        printf("Could not open file %s for writing.\n", outputFileName);
        fclose(inputFile);
        return 1;
    }

    char ch;

    while ((ch = fgetc(inputFile)) != EOF)
    {
        char encodedChar = (ch + key) % 256;
        fputc(encodedChar, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("File encoded successfully. Encoded file: %s\n", outputFileName);

    return 0;
}