#include <stdio.h>
#include <string.h>

int main()
{
    char item[50] = "";
    int quantity = 0;
    char currency = '$';
    float price = 0.0f;
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each item?: ");
    scanf("%f", &price);
    getchar();
    printf("How many items do you do have?: ");
    scanf("%d", &quantity);
    getchar();

    total = price * quantity;
    printf("You orderd %d %s and each of them cost %c%.2f your total is %c%.2f.", quantity, item, currency, price, currency, total);
}