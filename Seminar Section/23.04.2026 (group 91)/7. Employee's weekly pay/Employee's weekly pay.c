#include <stdio.h>
#include <stdlib.h>

/*
7. Да се състави програма на C, която:

•	създава двоичен файл със записи, представляващи данни за сътрудник във фирма: 
идентификационен номер на сътрудника, почасово плащане, брой отработени часове за една седмица, 
седмична заплата;

•	Общият брой на сътрудниците да не превишава 30

•	включва възможност за допълване на нови записи във файла;

•	включва възможност за извеждане на изчислената седмична заплата на екрана. 
При изчисляване на работната заплата е необходимо да се знае, че всеки извънреден час 
(над 40 часа седмично) се заплаща 150%, а стойността на данъците е 3,65% от общата заработка.

•	включва меню в главната функция main().
*/

typedef struct 
{
    int id;
    float hourly_rate;
    int hours_worked;
    float weekly_salary;
} Employee;

void add_employee(FILE *file) 
{
    Employee emp;
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter hourly rate: ");
    scanf("%f", &emp.hourly_rate);
    printf("Enter hours worked: ");
    scanf("%d", &emp.hours_worked);

    if (emp.hours_worked > 40) 
    {
        int overtime_hours = emp.hours_worked - 40;
        emp.weekly_salary = (40 * emp.hourly_rate) + (overtime_hours * emp.hourly_rate * 1.5);
    } 
    else 
    {
        emp.weekly_salary = emp.hours_worked * emp.hourly_rate;
    }

    emp.weekly_salary -= emp.weekly_salary * 0.0365;

    fwrite(&emp, sizeof(Employee), 1, file);
}

void display_employees(FILE *file) 
{
    Employee emp;
    rewind(file);
    printf("ID\tHourly Rate\tHours Worked\tWeekly Salary\n");
    while (fread(&emp, sizeof(Employee), 1, file) == 1) 
    {
        printf("%d\t%.2f\t\t%d\t\t%.2f\n", emp.id, emp.hourly_rate, emp.hours_worked, emp.weekly_salary);
    }
}

int main() 
{
    FILE *file = fopen("employees.bin", "ab+");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return 2;
    }

    int choice;
    do 
    {
        printf("Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                add_employee(file);
                break;
            case 2:
                display_employees(file);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    fclose(file);
    return 0;
}