/*  Farenheit converter
    C = (F-32)/1.8
    Nick Kruger
    Sep 16, 2021
*/

#include <stdio.h>

int main(void)
{
    int farenheit, celcius;

    printf("Please enter fahrenheit as an integer:");
    scanf("%d", &farenheit);
    celcius = (farenheit - 32) / 1.8; //note conversion
    printf("\n %d farenheit is %d celcius.\n", farenheit, celcius);
    return 0;
}
