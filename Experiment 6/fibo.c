#include <stdio.h>
int FIBO(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n - 1) + FIBO(n - 2);
}
int main() 
{
    int num;
    printf("Enter number of terms of Fibonacci: ");
    scanf("%d", &num);
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) 
    {
        printf("%d ", FIBO(i));
    }
    return 0;
}
