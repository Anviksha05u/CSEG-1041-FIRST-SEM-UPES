#include <stdio.h>
// Recursive function to check if num is divisible by any number from i to 2
int check(int num, int i) 
{
    if (i == 1)
        return 1;  // Base case: no divisors found, so it's prime
    if (num % i == 0)
        return 0;  // Found a divisor, not prime
    return check(num, i - 1);  // Recursive case: check next smaller i
}
// Main prime check function
int isprime(int num) 
{
    if (num <= 1)
        return 0;  // 0 and 1 are not prime
    return check(num, num - 1);  // Start checking from num-1 to 2
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isprime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
