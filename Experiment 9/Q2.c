//Open an existing file and read its content character by character, and then close the file.
#include<stdio.h>
int main()
{
FILE *fptr;
fptr = fopen ("file.txt", "r");
if (fptr == NULL)
{
    printf("Error opening file");
    return 1;
}
printf("File opened successfully ");
char ch;
while ((ch = fgetc(fptr)) != EOF)
{
    printf("%c", ch);
}
fclose(fptr);
return 0;
}
