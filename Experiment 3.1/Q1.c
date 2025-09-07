//To check if the triangle is valid or not. If it is then check if the triangle is isosceles, scalene or equilateral.
#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c,h,b1,b2;
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
   if (a>b && a>c)
   {
    h=a;
    b1=b;
    b2=c;
   }
   else if (b>c && b>a)
   {
    h=b;
    b1=c;
    b2=a;
   }
   else if (c>a && c>b)
   {
    h=c;
    b1=a;
    b2=b;
   }
   else if (h*h == (b1*b1 + b2*b2))
   {
    printf ("IT IS A RIGHT ANGLED TRIANGLE\n");
   }
  }
  else 
  {
   printf("Not a triangle\n");
  }
 return 0;
}
