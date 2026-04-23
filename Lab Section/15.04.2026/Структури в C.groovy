Какво са структурите в C?
Структурите в C са потребителски дефинирани типове данни, които позволяват групиране на различни видове данни под едно име. 
Те се използват за създаване на сложни данни, които могат да съдържат различни типове елементи, като числа, символи и други структури. 
Структурите са полезни за организиране на данните и улесняват работата с тях.

Как се дефинират структури в C?
Структурите в C се дефинират с помощта на ключовата дума `struct`, следвана от името на структурата и блок от код, 
който съдържа членовете на структурата.
Ето пример за дефиниция на структура в C:

struct Person 
{
    char name[50];
    int age;
    float height;
};
/*
В този пример, структурата `Person` съдържа три члена: 
`name`, който е масив от символи (стринг), 
`age`, който е цяло число, и 
`height`, който е число с плаваща запетая.
*/

Struct е еквивалент на клас в Python, но в C няма функции или методи, свързани със структурите.

Създаване и доступ до елементите на структура:
След като сте дефинирали структура, можете да създадете променлива от този тип и да достъпите до нейните членове.
Ето пример за създаване на променлива от тип `Person` и достъп до нейните членове:

struct Person person1;
strcpy(person1.name, "John Doe"); // Копиране на стринг в
person1.age = 30; // Задаване на възраст
person1.height = 1.75; // Задаване на височина
printf("Name: %s\n", person1.name);
printf("Age: %d\n", person1.age);
printf("Height: %.2f\n", person1.height);
В този пример, създаваме променлива `person1` от тип `Person`, задаваме стойности на нейните членове и ги отпечатваме на конзолата.
Структурите в C са мощен инструмент за организиране на данни и могат да се използват за създаване на сложни програми.

Референции към структури:
Можете също така да използвате указатели към структури, за да достъпите до членовете на структурата. 
Ето пример за това:
void printPerson(struct Person *p) 
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.2f\n", p->height);
}

int main() 
{
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 1.75;

    printPerson(&person1); // Предаване на адреса на person1
    return 0;
}
В този пример, функцията `printPerson` приема указател към структура `Person` и използва оператора `->`, за да достъпите до членовете на структурата.

Дефиниране на собствени типове данни с typedef:
Можете да използвате ключовата дума `typedef`, за да създадете по-кратко име за структурата.
Ето пример за това:

struct Distance
{
    float kilometers;
    float miles;
};
typedef struct Distance Distance;

int main() 
{
    Distance d1;
    d1.kilometers = 5.0;
    d1.miles = 3.1;

    printf("Distance in kilometers: %.2f\n", d1.kilometers);
    printf("Distance in miles: %.2f\n", d1.miles);
    return 0;
}

или:

typedef struct Distance
{
    float kilometers;
    float miles;
} distances;

int main ()
{
    distances d1;
    d1.kilometers = 5.0;
    d1.miles = 3.1;

    printf("Distance in kilometers: %.2f\n", d1.kilometers);
    printf("Distance in miles: %.2f\n", d1.miles);
    return 0;
}

Вложени структури:
Структурите в C могат да съдържат други структури като членове, което позволява създаването на по-сложни данни.
Ето пример за вложени структури:
struct Address 
{
    char street[100];
    char city[50];
    char country[50];
};
struct Person 
{
    char name[50];
    int age;
    struct Address address; // Вложена структура
};
int main() 
{
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    strcpy(person1.address.street, "123 Main St");
    strcpy(person1.address.city, "Anytown");
    strcpy(person1.address.country, "USA");

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %s\n", person1.address.street, person1.address.city, person1.address.country);
    return 0;
}
В този пример, структурата `Person` съдържа член `address`, който е от тип `Address`, което позволява съхраняването на информация за адреса на лицето.
Структурите в C са мощен инструмент за организиране на данни и могат да се използват за създаване на сложни програми.
