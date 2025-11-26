//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
struct Employee 
{
    char name[50];
    int emp_id;
    float salary;
};
int main() 
{
    struct Employee e1, e2;
    FILE *fp;
    printf("Enter employee name: ");
    scanf("%s", e1.name);
    printf("Enter employee ID: ");
    scanf("%d", &e1.emp_id);
    printf("Enter salary: ");
    scanf("%f", &e1.salary);
    fp = fopen("employee.txt", "wb");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.txt", "rb");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee Details: \n");
    printf("Name: %s\n", e2.name);
    printf("Employee ID: %d\n", e2.emp_id);
    printf("Salary: %.2f\n", e2.salary);
    return 0;
}
