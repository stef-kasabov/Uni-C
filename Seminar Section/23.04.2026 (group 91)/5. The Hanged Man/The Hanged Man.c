#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5.Напишете програма за компютърен вариант на играта „Бесеница“. В тази игра на играча се показва дължината 
на определена дума (използват се подчертаващи тирета) и той се опитва да отгатне думата като въвежда букви. 
При всяко въвеждане на нова буква се проверява дали думата съдържа тази буква. Ако това е така, съответната 
буква се показва. Бройте буквите, въведени до завършване на думата. Играчът печели ако познае думата с 
въвеждане на брой букви не повече от дължината на търсената дума +2 или по-малко от този брой. 
Например, ако търсената дума е „concatenation“, то броят въведени букви трябва да е по-малък или равен на 15.
*/

int main() 
{  
    printf("Welcome to Hangman! Please enter a word for the game: "); 
    char wordle[100];
    scanf("%s", wordle);

    system("cls"); // Clear the console

    char word[100];
    strcpy(word, wordle);
    int word_length = strlen(word);
    char *guessed = (char *)malloc(word_length * sizeof(char));
    for (int i = 0; i < word_length; i++) 
    {
        guessed[i] = '_';
    }
    
    int attempts = 0;
    int max_attempts = word_length + 2;
    
    while (attempts < max_attempts) 
    {
        printf("Current word: ");
        for (int i = 0; i < word_length; i++) 
        {
            printf("%c ", guessed[i]);
        }
        printf("\n");
        
        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        
        int correct_guess = 0;
        for (int i = 0; i < word_length; i++) 
        {
            if (word[i] == guess) 
            {
                guessed[i] = guess;
                correct_guess = 1;
            }
        }
        
        if (!correct_guess) 
        {
            attempts++;
        }
        
        int won = 1;
        for (int i = 0; i < word_length; i++) 
        {
            if (guessed[i] == '_') 
            {
                won = 0;
                break;
            }
        }
        
        if (won) 
        {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }
    }
    
    if (attempts >= max_attempts) 
    {
        printf("Game over! You've used all your attempts. The word was: %s\n", word);
    }
    
    free(guessed);
    return 0;
}