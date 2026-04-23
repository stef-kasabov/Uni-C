#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2.Цецко е програмист и има хоби да прави сладкарски изделия. Помогнете му да напише програма, с която да менажира произведените сладка и техните доставки. 
За целта трябва да създадете структура за продукт, която да описва име на продукта, цена и уникален номер. Създайте и структура за поръчки, която да описва 
адрес на клиент и номер на продукт. 
От стандартния вход постъпват множество продукти и поръчки. Когато Цецко прави сладко той го добавя в списък на създадените сладка, а когато се пуска поръчка 
тя се изпълнява при наличие на продукт, иначе чака до създаването му. 

За входни данни ще получавате две команди:
Product
<име на продукт>
<цена>
<номер на продукта>

Тази команда създава нов продукт и го добавя в списъка с продукти. Ако има поръчка за този продукт то поръчката се изпълнява незабавно и се маха от чакащите за 
изпълнение.

Order
<адрес>
<номер на продукт>

Ако има наличен вече произведен продукт се изпълнява поръчката, в противен случай чака за създаване на продукта. 
При всяко изпълнение на поръчка изписвайте: 
Client <address> 
ordered <product name>

Програмата приключва работа при въвеждане на команда END
*/

typedef struct Product
{
    char name[100];
    float price;
    int product_number;
    struct Product* next;
} Product;
typedef struct Order
{
    char address[100];
    int product_number;
    struct Order* next;
} Order;
 
Product* product_head = NULL;
Order* order_head = NULL;

void add_product(char* name, float price, int product_number) 
{
    Product* new_product = (Product*)malloc(sizeof(Product));
    strcpy(new_product->name, name);
    new_product->price = price;
    new_product->product_number = product_number;
    new_product->next = NULL;

    if (product_head == NULL) 
    {
        product_head = new_product;
    } 
    else 
    {
        Product* temp = product_head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = new_product;
    }

    Order* prev_order = NULL;
    Order* current_order = order_head;
    while (current_order != NULL) 
    {
        if (current_order->product_number == product_number) 
        {
            printf("Client %s ordered %s\n", current_order->address, new_product->name);
            if (prev_order == NULL) 
            {
                order_head = current_order->next;
            } 
            else 
            {
                prev_order->next = current_order->next;
            }
            free(current_order);
            break;
        }
        prev_order = current_order;
        current_order = current_order->next;
    }
}

void add_order(char* address, int product_number) 
{
    Order* new_order = (Order*)malloc(sizeof(Order));
    strcpy(new_order->address, address);
    new_order->product_number = product_number;
    new_order->next = NULL;

    Product* temp_product = product_head;
    while (temp_product != NULL) 
    {
        if (temp_product->product_number == product_number) 
        {
            printf("Client %s ordered %s\n", address, temp_product->name);
            free(new_order);
            return;
        }
        temp_product = temp_product->next;
    }

    if (order_head == NULL) 
    {
        order_head = new_order;
    } 
    else 
    {
        Order* temp = order_head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = new_order;
    }
}

int main() 
{
    char command[10];
    while (1) 
    {
        printf("Enter command (Product, Order, END): ");
        scanf("%s", command);
        if (strcmp(command, "END") == 0) 
        {
            printf("Exiting program.\n");
            break;
        } 
        else if (strcmp(command, "Product") == 0) 
        {
            printf("Enter product <name>, <price>, and <product number>: ");
            char name[100];
            float price;
            int product_number;
            scanf("%s %f %d", name, &price, &product_number);
            add_product(name, price, product_number);
        } 
        else if (strcmp(command, "Order") == 0) 
        {
            printf("Enter client <address> and <product number>: ");
            char address[100];
            int product_number;
            scanf("%s %d", address, &product_number);
            add_order(address, product_number);
        }
    }
    return 0;
}