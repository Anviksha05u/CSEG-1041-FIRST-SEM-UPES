// According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int y = year - 1;
    int day = (1 + y + y/4 - y/100 + y/400) % 7;
    day = (day + 6) % 7;
    switch(day)
    {
        case 0: printf("Monday\n"); 
        break;
        case 1: printf("Tuesday\n"); 
        break;
        case 2: printf("Wednesday\n"); 
        break;
        case 3: printf("Thursday\n"); 
        break;
        case 4: printf("Friday\n"); 
        break;
        case 5: printf("Saturday\n"); 
        break;
        case 6: printf("Sunday\n"); 
        break;
    }
    return 0;
}
