#include <stdio.h>
//recursive factorial function
int recursive(int n) 
{
    if (n == 0)
    { 
        return 1;
    }
    else
    {
        return n * recursive(n - 1);
    }
}
//non-recursive factorial function
int non_recursive(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int binomial_coefficient(int n, int r)
{
    return recursive(n) / (recursive(r) * recursive(n-r));
}
int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("\nFactorial = %d\n", recursive(n));
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r));
    return 0;
}
