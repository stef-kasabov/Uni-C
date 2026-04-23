#include <stdio.h>
#include <stdlib.h>

/*
3.	Направете масив от елементи с тип структура за ученици. Направете структура за випуск с няколко класа.  
Въведете данни за учениците от един клас и изчислете средния бал на групата. 
Изчислете средния бал на випуска.
*/

struct Student 
{
    char name[50];
    float grade;
};

struct Class
{
    struct Student students[30]; 
    char class[10];
};

struct Graduation 
{
    struct Class classes[10];
    int num_students;
};

int main() 
{
    struct Graduation graduation;
    graduation.num_students = 0;

    printf("Enter the number of students in the class: ");
    int num_students;
    scanf("%d", &num_students);
    graduation.num_students += num_students;

    printf("Enter the class for the students: ");
    scanf("%s", graduation.classes[0].class);

    for (int i = 0; i < num_students; i++) 
    {
        //separete the name and grade input to handle invalid grade input
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", graduation.classes[0].students[i].name);

        printf("Enter the grade of student %d: ", i + 1);
        while (1) 
        {
            if (scanf("%f", &graduation.classes[0].students[i].grade) != 1 || graduation.classes[0].students[i].grade < 2 || 
                            graduation.classes[0].students[i].grade > 6) 
            {
                printf("Invalid grade. \n Please enter a grade between 2 and 6: ");

            } 
            else 
            {
                break;
            }
        }
    }

    float total_grade = 0;
    for (int i = 0; i < num_students; i++) 
    {
        total_grade += graduation.classes[0].students[i].grade;
    }
    float average_grade = total_grade / num_students;
    printf("Average grade for the class: %.2f\n", average_grade);

    return 0;
}
