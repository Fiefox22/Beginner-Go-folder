#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 15;
    float price = 19.99;
    double rand = 3.1345446565;
    char currency = "$";
    char name[] = "Bob";

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%lf\n", rand);
    printf("%c\n", currency);
    printf("%s\n", name);
}