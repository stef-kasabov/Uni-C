#include <stdio.h>

/*
9.	Напиши програма, която:
a.	Декларира пет цели числа и пет указателя.
b.	Сортира числата във възходящ ред, използвайки само указатели.
c.	Изчислява медианата на петте числа чрез указатели.
d.	Извежда числата преди и след сортирането.
e.	Не използва допълнителни int променливи, освен указателите
*/

int main() {
    int a, b, c, d, e;
    int *p1 = &a, *p2 = &b, *p3 = &c, *p4 = &d, *p5 = &e;
    
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", p1, p2, p3, p4, p5);
    
    printf("Before sorting: %d %d %d %d %d\n", *p1, *p2, *p3, *p4, *p5);
    
    for (int *i = p1; i <= p5 - 1; i++) {
        for (int *j = p1; j < p5 - (i - p1); j++) {
            if (*j > *(j + 1)) {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
    
    printf("After sorting: %d %d %d %d %d\n", *p1, *p2, *p3, *p4, *p5);
    
    int *median = p3;
    printf("Median: %d\n", *median);
    
    return 0;
}