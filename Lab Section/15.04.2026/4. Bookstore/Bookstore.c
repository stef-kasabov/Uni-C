#include <stdio.h>
#include <stdlib.h>

/*
4.	Създайте структура Book, която съдържа следната информация:
•	заглавие (низ),
•	автор (низ),
•	година на издаване (цяло число),
•	цена (реално число).

Направете масив от книги (примерно 5). Попълнете данни за тях.
Напишете функция, която:
•	извежда информацията за най-евтината и най-скъпата книга.
•	намира средната цена на всички книги.
*/

typedef struct Book
{
    char title[100];
    char author[100];
    int year;
    float price;
} books;

void findCheapestAndMostExpensive(books *bookArray, int size)
{
    if (size <= 0)
    {
        printf("No books available.\n");
        return;
    }

    books *cheapest = &bookArray[0];
    books *mostExpensive = &bookArray[0];

    for (int i = 1; i < size; i++)
    {
        if (bookArray[i].price < cheapest->price)
        {
            cheapest = &bookArray[i];
        }
        if (bookArray[i].price > mostExpensive->price)
        {
            mostExpensive = &bookArray[i];
        }
    }

    printf("Cheapest Book:\nTitle: %s\nAuthor: %s\nYear: %d\nPrice: %.2f\n",
           cheapest->title, cheapest->author, cheapest->year, cheapest->price);
    printf("Most Expensive Book:\nTitle: %s\nAuthor: %s\nYear: %d\nPrice: %.2f\n",
           mostExpensive->title, mostExpensive->author, mostExpensive->year, mostExpensive->price);
}

float calculateAveragePrice(books *bookArray, int size)
{
    if (size <= 0)
    {
        printf("No books available.\n");
        return 0.0;
    }

    float totalPrice = 0.0;
    for (int i = 0; i < size; i++)
    {
        totalPrice += bookArray[i].price;
    }
    return totalPrice / size;
}

int main()
{
    int size;
    printf("Enter the number of books: ");
    scanf("%d", &size);

    books bookArray[100];
    for (int i = 0; i < size; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", bookArray[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", bookArray[i].author);
        printf("Year: ");
        scanf("%d", &bookArray[i].year);
        printf("Price: ");
        scanf("%f", &bookArray[i].price);
    }

    findCheapestAndMostExpensive(bookArray, size);
    float averagePrice = calculateAveragePrice(bookArray, size);
    printf("Average Price: %.2f\n", averagePrice);

    return 0;
}