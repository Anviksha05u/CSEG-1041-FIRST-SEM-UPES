//Find and print the student with the highest marks.

#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
int main() 
{
    struct Student students[5]; 
    int i, n, topIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
    for (i = 1; i < n; i++) 
    {
        if (students[i].marks > students[topIndex].marks) 
        {
            topIndex = i;
        }
    }
    printf("Student with Highest Marks: \n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll No: %d\n", students[topIndex].roll_no);
    printf("Marks: %.2f\n", students[topIndex].marks);
    return 0;
}
