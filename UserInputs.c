#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Type in your age: ");
    scanf("%d", &age);

    printf("Type in your gpa: ");
    scanf("%f", &gpa);

    printf("Type in your grade: \n");
    scanf(" %c", &grade);

    getchar();
    printf("Type in your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%f\n", gpa);
    printf("%d\n", age);
    printf("%c\n", grade);
    printf("%s\n", name);
    return 0;
}