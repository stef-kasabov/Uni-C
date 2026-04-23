#include <stdio.h>
#include <stdlib.h>

/*
3. Трябва да опишете база данни която работи с автокъща. 
Данните ви трябва да имат следния вид - марка на автомобил, модел на автомобила - 5 знака, 
обем на двигателя, цена, има ли регистрация или не (символ Y/N). 

Създайте програма, която записва така дадената структура на базата данни във двоичен и паралелно в текстови файл. 
Напишете възможност за добавяне на нов запис. 
Създайте програма, която прочита двата създадени файла и изкарва един след друг данните от бинарния и 
текстовия файл, за да направите сравнение за правилната работа на програмата ви.
*/

typedef struct
{
    char brand[20];
    char model[5];
    float engine_volume;
    float price;
    char registration; // 'Y' or 'N'
} Car;

char *bin_file_g = "cars.bin";
char *text_file_g = "cars.txt";

void add_record() 
{
    Car car;
    FILE *bin_file = fopen(bin_file_g, "ab");
    FILE *text_file = fopen(text_file_g, "a");

    if (!bin_file || !text_file) 
    {
        printf("Error opening files!\n");
        return;
    }

    printf("Enter car brand: ");
    scanf("%s", car.brand);
    
    printf("Enter car model (5 characters): ");
    scanf("%s", car.model);
    
    printf("Enter engine volume: ");
    scanf("%f", &car.engine_volume);
    
    printf("Enter price: ");
    scanf("%f", &car.price);
    
    printf("Does it have registration? (Y/N): ");
    while (scanf(" %c", &car.registration) != 1 || (car.registration != 'Y' && car.registration != 'N')) 
    {
        printf("Invalid input! Please enter Y or N: ");
    }

    fwrite(&car, sizeof(Car), 1, bin_file);
    fprintf(text_file, "%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);

    fclose(bin_file);
    fclose(text_file);
}

void file_print()
{
    Car car;
    FILE *file = fopen(bin_file_g, "rb");

    if (!file) 
    {
        printf("Error opening binary file!\n");
        return;
    }
    printf("\nBinary File Contents:\n");
    while (fread(&car, sizeof(Car), 1, file) == 1) 
    {
        printf("%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);
    }

    fclose(file);

    FILE *text_file = fopen(text_file_g, "r");
    if (!text_file) 
    {
        printf("Error opening text file!\n");
        return;
    }
    printf("\nText File Contents:\n");
    while (fscanf(text_file, "%s %s %f %f %c", car.brand, car.model, &car.engine_volume, &car.price, &car.registration) == 5) 
    {
        printf("%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_volume, car.price, car.registration);
    }
    fclose(text_file);
}

void clear_files() 
{
    FILE *f_bin = fopen(bin_file_g, "wb");
    FILE *f_txt = fopen(text_file_g, "w");

    if (f_bin != NULL && f_txt != NULL) 
    {
        printf("Database cleared successfully!\n");
    } 
    else 
    {
        printf("Error clearing the files!\n");
    }

    if (f_bin) fclose(f_bin);
    if (f_txt) fclose(f_txt);
}

int main ()
{
    int choice;

    while (1) 
    {
        printf("Dealership\n");
        printf("1. Add new car\n");
        printf("2. Read and compare files\n");
        printf("3. Exit\n");
        printf("Choose option (1-3): ");
        
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3) 
        {
            printf("Invalid input!\n");
            break;
        }

        switch (choice) 
        {
            case 1:
                add_record();
                break;
            case 2:
                file_print();
                break;
            case 3:
                printf("Exiting the program.\n");
                clear_files();
                return 0;
            default:
                printf("Please choose a valid option!\n");
        }
    }
    return 0;
}