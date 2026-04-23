#include <stdio.h>
#include <stdlib.h>

/*
2.	Направете структура за превозно средство с подходящи полета. 
Направете втора структура за различен тип превозни средства и попълнете данните за променливи от вид кола, мотор лодка и самолет. 
Сравнявайте различните средства по характеристика по избор.
*/

struct Vehicle 
{
    char brand[50];
    int year;
    float price;
};

struct Car 
{
    struct Vehicle base;
    int doors;
};

struct Motorcycle 
{
    struct Vehicle base;
    float engine_size;
};

struct Boat 
{
    struct Vehicle base;
    float length;
};

int main() 
{
    struct Car car = {{"Toyota", 2020, 20000.0}, 4};
    struct Motorcycle motorcycle = {{"Honda", 2019, 15000.0}, 600.0};
    struct Boat boat = {{"Jack Sparrow's Ship", 2011, 5000000}, 30.0};

    printf("Car: %s, Year: %d, Price: %.2f, Doors: %d\n", car.base.brand, car.base.year, car.base.price, car.doors);
    printf("Motorcycle: %s, Year: %d, Price: %.2f, Engine Size: %.2f\n", motorcycle.base.brand, motorcycle.base.year, motorcycle.base.price, 
        motorcycle.engine_size);
    printf("Boat: %s, Year: %d, Price: %.2f, Length: %.2f\n", boat.base.brand, boat.base.year, boat.base.price, boat.length);

    return 0;
}
