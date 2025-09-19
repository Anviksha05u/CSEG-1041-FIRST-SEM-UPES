/*
Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a 2D array where each row represents a student and each column represents a subject.
Perform the following:
 (a) Calculate the total and average marks of each student.
 (b) Find the highest scorer (student with maximum total marks).
 (c) Find the subject in which the class performed worst (lowest average marks).
 (d) Use sizeof() operator to display the total memory consumed by the array.
*/

#include <stdio.h>
int main()
{
    int i, j; //Variable declaration for loop counters
    int marks[5][3]; //Declare a 2D array of 5 students, 3 subjects each
    int total[5]; //To store total marks of each student
    int hscorer = 0; //To store the marks of the hightest scorer
    int wsubject = 0; //To store the subject with lowest average marks
    float avg[5]; //To store average marks of each student
    float subavg[3]; //To store average marks of each subject
    //Input marks of the students
    printf("Enter marks of students in each subject: ");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: \n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    //Calculate total and average marks of each student
    for (i = 0; i < 5; i++)
    {
        total[i] = 0;
        for (j = 0; j < 3; j++)
        {
           total[i] += marks[i][j];
        }
        avg[i] = total[i] / 3.0;
    }
    //Display total and average marks of each student
    printf("\nTotal and Average marks of each student: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n\nTotal: %d, Average: %.2f\n", i + 1, total[i], avg[i]);
    }
    //Finding highest scorer
    for (i = 1; i < 5; i++)
    {
        if (total[i] > total [hscorer])
        {
            hscorer = i;
        }
    }
    printf("\nHighest Scorer: Student %d with %d marks\n", hscorer + 1, total[hscorer]);
    //Finding subject averages
    for (j = 0; j < 3; j++)
    {
        int subTotal = 0;
        for(i = 0; i < 5; i++)
        {
            subTotal += marks[i][j];
        }
        subavg[j] = subTotal / 5.0;
    }
    //Finding the subject in which the class performed the worst
    for (j = 1; j < 3; j++)
    {
        if (subavg[j] < subavg[wsubject])
        {
            wsubject = j;
        }
    }
    printf ("Worst Subject: Subject %d with average %.2f\n", wsubject + 1, subavg[wsubject]);
    //Total memory consumed by the array
    int totalBytes = 5 * 3 * sizeof(int);
    printf("Total memory consumed by the array: %d bytes\n", totalBytes);
    return 0;
}