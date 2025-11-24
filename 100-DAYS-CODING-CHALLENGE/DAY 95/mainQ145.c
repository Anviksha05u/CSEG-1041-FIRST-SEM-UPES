//Return a structure containing top student's details from a function.

#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
struct Student TopStudent(struct Student students[], int n) 
{
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) 
        {
            topIndex = i;
        }
    }
    return students[topIndex];  // Return the struct of top student
}
int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n]; 
    struct Student top;
    for (int i = 0; i < n; i++) 
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
    // Call function to get top student's detail
    top = TopStudent(students, n);
    printf("\nTop Student: \n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}
