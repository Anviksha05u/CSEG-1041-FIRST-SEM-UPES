#include <stdio.h>
typedef struct EMP 
{
    char name[50];      
    float basicPay;     
    float grossSalary;  
} EMP;
int main() 
{
    EMP E[100];  
    float DA;
    for (int i = 0; i < 100; i++) 
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", E[i].name); 
        printf("Enter basic pay of %s: ", E[i].name);
        scanf("%f", &E[i].basicPay);
        DA = 0.52 * E[i].basicPay;      
        E[i].grossSalary = E[i].basicPay + DA; 
        printf("Employee Name: %s\n", E[i].name);
        printf("Gross Salary: %.2f\n", E[i].grossSalary);
    }
    return 0;
}
