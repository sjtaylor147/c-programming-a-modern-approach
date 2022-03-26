#include <stdio.h>

/* Program to calculate the Beaufort scale */

int main (void)
{
    int wind_speed;

    printf("Enter the wind speed: ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
        printf("Calm");
    else if (wind_speed < 4)
        printf("Light air");
    else if (wind_speed < 28)
        printf("Breeze");
    else if (wind_speed < 48)
        printf("Gale");
    else if (wind_speed < 64)
        printf("Storm");
    else 
        printf("Hurricane");

    return 0;
}