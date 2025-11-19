//Open a file, read its content line by line, and display each line on the console.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen ("file.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    printf("File opened successfully");
    char s[100];
    while (fgets(s, 100, fptr) != NULL)
    {
        printf("%s", s);
    }
    fclose(fptr);
    return 0;
}
