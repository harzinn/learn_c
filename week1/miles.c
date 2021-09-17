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
    int miles, yards;
    double kilometers;

    printf("How many miles?: ");
    scanf("%d", &miles);
    printf("How many yards?: ");
    scanf("%d", &yards);
    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nThe conversion from %d miles and %d yards"
    " to kilometers is %lf kilometers.\n", miles, yards, kilometers);
    return 0;
}