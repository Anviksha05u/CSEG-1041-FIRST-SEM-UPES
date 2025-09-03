#include <stdio.h>
int main() 
{
    char name[50];
    int age;
    char email[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your email: ");
    scanf("%s", &email);
    printf("\nHello %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("Your email is %s\n", email);
    return 0;
}
