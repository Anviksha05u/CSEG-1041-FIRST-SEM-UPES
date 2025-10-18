#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;
int main()
{
    struct complex();
    int c1, c2, sum, diff;
    printf("Enter first real complex number: ");
    scanf("%d", &c1.real);
    printf("Enter first imaginary complex number: ");
    scanf("%d", &c1.imag);
    printf("Enter second real complex number: ");
    scanf("%d", &c2.real);
    printf("Enter second imaginary complex number: ");
    scanf("%d", &c2.imag);
    sum.real = (c1.real + c2.real);
    diff.real = (c1.real - c2.real);
    sum.imag = (c1.imag + c2.imag);
    diff.imag = (c1.imag - c2.imag);
    printf("First complex number: %d + %di\n", c1.real, c1.imag);
    printf("Second complex number: %d + %di\n", c2.real, c2.imag);
    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Difference: %d + %di\n", diff.real, diff.imag);
    return 0;
}
