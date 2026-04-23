#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Харалампий иска да организира рождения си ден, но за целта трябва да закупи инвентар за провеждането, който се изразява в 
следните предмети:
Стол – 13,99; Маса за 8 човека – 42,00; комплект от 6 чаши – 5,98; комплект от 6 чинии с прибори – 21,02.
От клавиатурата се въвеждат броя на гостите. Следват редове с неща, които до момента е купил Харалампий за партито до въвеждане 
на команда PARTY!. Сметнете колко пари е похарчил до момента Харалампий и колко още неща трябва да купи за да може да реализира 
своето парти и всички гости да имат стол, да седят на маса и да разполагат с чаша и прибори.
Пример: 
10
Table
Chair 
Chair
Chair
Cups
Cups
Dishes
PARTY!
Изход:
116,95 
1 Table
7 Chairs
1 Dishes
(пояснение – поръчаните неща са на стойност 116,95. Има закупена една маса, а за сядането на 10 човека са нужни 2 маси. Има 
закупени 3 стола – нужни са още 7 за да може всеки да седи на стол. Приборите, които са нужни са още 4 броя, което значи 
закупуване на още един комплект).
*/

int main() 
{
    int guests;
    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    int chairs = 0, tables = 0, cups = 0, dishes = 0;
    char item[20];

    printf("Enter the items you have bought (type PARTY! to finish):\n");
    while (1) {
        scanf("%s", item);

        int i = 0;
        char p[] = "PARTY!";
        while (item[i] == p[i] && item[i] != '\0') 
        {
            i++;
        }
        if (item[i] == '\0' && p[i] == '\0') break;

        i = 0;
        char c[] = "Chair";
        while (item[i] == c[i] && item[i] != '\0') 
        {
            i++;
        }
        if (item[i] == '\0' && c[i] == '\0') 
        {
            chairs++;
            continue;
        }

        i = 0;
        char t[] = "Table";
        while (item[i] == t[i] && item[i] != '\0') 
        {
            i++;
        }
        if (item[i] == '\0' && t[i] == '\0') 
        {
            tables++;
            continue;
        }
        
        i = 0;
        char cu[] = "Cups";
        while (item[i] == cu[i] && item[i] != '\0') 
        {
            i++;
        }
        if (item[i] == '\0' && cu[i] == '\0') 
        {
            cups++;
            continue;
        }

        i = 0;
        char d[] = "Dishes";
        while (item[i] == d[i] && item[i] != '\0') 
        {
            i++;
        }
        if (item[i] == '\0' && d[i] == '\0') 
        {
            dishes++;
            continue;
        }
    }

    double total_cost = chairs * 13.99 + tables * 42.00 + cups * 5.98 + dishes * 21.02;
    printf("Total cost of times: %.2lf\n", total_cost);

    int needed_tables = (guests + 7) / 8;
    int needed_chairs = guests - chairs;
    int needed_cups = (guests + 5) / 6 ;
    int needed_dishes = (guests + 5) / 6 ;

    printf("%d Table(s)\n", needed_tables - tables);
    printf("%d Chair(s)\n", needed_chairs);
    printf("%d Cups(s)\n", needed_cups - cups);
    printf("%d Dishes(s)\n", needed_dishes - dishes);

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int guests;
    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    int chairs = 0, tables = 0, cups = 0, dishes = 0;
    char item[20];

    printf("Enter the items you have bought (type PARTY! to finish):\n");
    while (1) {
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) 
        {
            break;
        } 
        else if (strcmp(item, "Chair") == 0) 
        {
            chairs++;
        } 
        else if (strcmp(item, "Table") == 0) 
        {
            tables++;
        } 
        else if (strcmp(item, "Cups") == 0) 
        {
            cups++;
        } 
        else if (strcmp(item, "Dishes") == 0) 
        {
            dishes++;
        }
    }

    double total_cost = chairs * 13.99 + tables * 42.00 + cups * 5.98 + dishes * 21.02;
    printf("Total cost of items: %.2lf\n", total_cost);

    int needed_tables = (guests + 7) / 8;
    int needed_chairs = guests - chairs;
    int needed_cups = (guests + 5) / 6 ;
    int needed_dishes = (guests + 5) / 6 ;

    printf("%d Table(s)\n", needed_tables - tables);
    printf("%d Chair(s)\n", needed_chairs);
    printf("%d Cups(s)\n", needed_cups - cups);
    printf("%d Dishes(s)\n", needed_dishes - dishes);

    return 0;
}
*/