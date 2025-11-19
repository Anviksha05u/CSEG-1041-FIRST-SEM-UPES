//Write a program to create a new file and write text into it.
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen ("file.txt", "w");
    if (fptr == NULL)
    {
        printf("Error creating file");
        return 1;
    }
    printf("File created successfully");
    fprintf(fptr, "Hello World \n welcome \n");
    fclose(fptr);
    return 0;
}
