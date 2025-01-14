/* Return the greatest common denominator of two values */

#include <stdio.h>

int gcd(int, int);              //suggest the function content types

int main(void)
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d: %d", a, b, gcd(a, b));
    return 0;
}

int gcd(int m, int n)
{
    int remainder;
    
    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}
