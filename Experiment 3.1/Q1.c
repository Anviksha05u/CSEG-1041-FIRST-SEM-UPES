//To check if the triangle is valid or not. If it is then check if the triangle is isosceles, scalene or equilateral.
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three sides of the triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && b + c > a && c + a > b) 
  {
   printf("It is a Triangle\n");
   if (a == b && b == c) 
   {
    printf("Equilateral triangle\n");
   } 
   else if (a == b || b == c || c == a) 
   {
    printf("Isosceles triangle\n");
   } 
   else
   {
    printf("Scalene triangle\n");
   }
  } 
  else 
  {
   printf("Not a triangle\n");
  }
 return 0;
}
