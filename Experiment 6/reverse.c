#include <stdio.h>
#include <string.h>
// Function to reverse the string
void reverse(char str[])
{
    int len=strlen(str);
    // Swap characters from start and end moving toward the center
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}
int main() 
{
    char str[100];
    printf("enter the string: ");
    scanf("%s",str);
    reverse(str);// Call the reverse function
    printf("The reversed string %s\n",str);
    return 0;
}