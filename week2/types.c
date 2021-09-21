/*  Fundamental Types Declaration and Assignment
    Nick K
    Sep 21, 2021
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7 , c = 6; /*declare and initilialize*/
    double average = 0.0 ; /* good practice */

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    average = (a + b + c) / 3.0; /* conversino if 3 */
    printf("average = %lf\n", average);
    return 0;
}