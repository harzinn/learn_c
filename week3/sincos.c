/*  Display a table of sine and cosine value between (0,1)
    Nick K
    Oct 24, 2021
*/

#include <stdio.h>
#include <math.h>   // required for floating point operations

int main(void)
{
    double radian;
    printf("Please enter a value between 0 and 1 radian: ");
    scanf("%lf", &radian);
    for (double i = radian; i <=1; i += radian)  // iterator variable needs to accept floats
    {
        printf("sin of %lf is %lf\n", i, sin(i));
        printf("cos of %lf is %lf\n\n", i, cos(i));
    }
    return 0;
}