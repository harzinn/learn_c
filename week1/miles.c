/*  Miles
    Harzinn
    Sep 16, 2021
*/

/*  Homework
    Input miles & yard
    general conversion
*/

#include <stdio.h>

int main(void)
{
    int miles = 26, yards =385;
    double kilometers;

    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %lf kilometers.\n", kilometers);
    return 0;
}