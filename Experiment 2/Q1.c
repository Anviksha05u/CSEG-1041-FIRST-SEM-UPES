// To calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>
int main()
{
  float len, br, ar, pm;
  printf("Enter the length: ");
  scanf("%f", &len);
  printf("Enter the breadth: ");
  scanf("%f", &br);
  ar = len*br;
  pm = 2*(len+br);
  printf("The area of the rectangle is %.2f\n", ar);
  printf("The perimeter of the rectangle is %.2f\n", pm);
  return 0;
}
