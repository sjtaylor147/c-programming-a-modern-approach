/* Sum a series of numbers using a long integer */

#include <stdio.h>
int main(void)
{
    long n, sum = 0;

    printf("This program sums a series of integers. \n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);                   //note long integer

    while (n != 0) {
        sum += n;
        scanf("%ld", &n);               //note long integer
    }
    printf("The sum is %ld\n", sum);    //note long integer

    return 0;
}