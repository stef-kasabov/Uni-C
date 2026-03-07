#include <stdio.h>
#include <stdlib.h>

/* 
3.	Да се прочете цяло число от 1 до 12 и да се изведе съответстващият му месец и сезона, в който попада.
o	Пример: 1 → Януари (Зима), 6 → Юни (Лято), 11 → Ноември (Есен)
o	Да се предвиди случай, когато не е въведено валидно число.
*/

int main ()
{
    int month;

    printf("Enter a number from 1 to 12: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January (Winter)\n");
            break;
        case 2:
            printf("February (Winter)\n");
            break;
        case 3:
            printf("March (Spring)\n");
            break;
        case 4:
            printf("April (Spring)\n");
            break;
        case 5:
            printf("May (Spring)\n");
            break;
        case 6:
            printf("June (Summer)\n");
            break;
        case 7:
            printf("July (Summer)\n");
            break;
        case 8:
            printf("August (Summer)\n");
            break;
        case 9:
            printf("September (Autumn)\n");
            break;
        case 10:
            printf("October (Autumn)\n");
            break;
        case 11:
            printf("November (Autumn)\n");
            break;
        case 12:
            printf("December (Winter)\n");
            break;
        default:
            printf("Invalid input. Please enter a number from 1 to 12.\n");
    }

    return 0;
}