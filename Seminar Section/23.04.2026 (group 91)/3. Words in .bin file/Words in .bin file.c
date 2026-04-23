#include <stdio.h>
#include <stdlib.h>

/*
3.Имате текстов файл, в който имате думи (на английски език и не повече от 50 знака). 
Прочетете думите, и в динамичен масив запишете тези думи, които започват с последния знак на предходната дума
(думите се гледат поред, записва за първата дума от файла след което се записва първата която се срещне и отговаря на условието и т.н).
В бинарен файл запишете така направения масив от думи. 
Направете възможност за изкарване на екрана съдържанието на бинарния файл.

изход на файла input.txt:   
apple car price elephant head tire cool soft eleven output night tent story movies pleasure memory time search shortcut river compare evening 

Изход на файла output.bin:
apple elephant tire eleven night tent time evening

Пояснение - думите в бинарния файл за разделени със знака “ ” (интервал). 
Използвайте го за разделител и четете знак по знак.
*/

int main()
{
    FILE *set_words = fopen("input.txt", "r");
    if (!set_words) 
    {
        printf("Cannot open input.txt\n");
        return;
    }

    char **words = NULL;
    int count = 0;
    char lastChar = '\0';
    char word[51];

    while (fscanf(set_words, "%50s", word) == 1) //"%50s" за да се избегне препълване на буфера
    {
        if (count == 0) 
        {
            words = (char**)malloc(sizeof(char*));
            words[0] = (char*)malloc(strlen(word) + 1);
            strcpy(words[0], word);
            lastChar = word[strlen(word) - 1];
            count++;
        } 
        else 
        {
            if (word[0] == lastChar) 
            {
                words = (char**)realloc(words, (count + 1) * sizeof(char*));
                words[count] = (char*)malloc(strlen(word) + 1);
                strcpy(words[count], word);
                lastChar = word[strlen(word) - 1];
                count++;
            }
        }
    }
    fclose(set_words);

    FILE *condition_success = fopen("output.bin", "wb");
    if (!condition_success) 
    {
        printf("Cannot open output.bin\n");
        return;
    }
    for (int i = 0; i < count; i++) 
    {
        fwrite(words[i], sizeof(char), strlen(words[i]), condition_success);
        if (i < count - 1) 
        {
            fwrite(" ", sizeof(char), 1, condition_success);
        }
    }
    fclose(condition_success);

    FILE *condition_successr = fopen("output.bin", "rb");
    if (!condition_successr) 
    {
        printf("Cannot open output.bin for reading\n");
        return;
    }
    char c;
    while (fread(&c, sizeof(char), 1, condition_successr) == 1) 
    {
        printf("%c", c);
    }
    printf("\n");
    fclose(condition_successr);

    for (int i = 0; i < count; i++) 
    {
        free(words[i]);
    }
    free(words);
}