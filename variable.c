#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 15;
    int year = 2025;
    int quantity = 14;
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d product\n", quantity);

    float gpa = 4.1;

    printf("Your gpa is %.1f", gpa);

    double pi = 3.1415926535897932;
    printf("The value of pi is %.15lf", pi);

    char grade = 'A';

    printf("Your grade is %c\n", grade);

    char name[] = "Bob";
    printf("Hello %s", name);
    return 0;

    bool isOnline = true;

    if (isOnline)
    {
        printf("He is online");
    }
    else
    {
        printf("He is not online");
    }
}
