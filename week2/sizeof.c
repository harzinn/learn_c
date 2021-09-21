/*  Fundamental Types sizoe operator
    Nick K
    Sep 21, 2021
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6; /* declare and init */
    double average = 0.0; /* good practice */
    char ch = 'e';

    printf("on my system \n");
    printf("int is a %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(ch));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(average));
    printf("long double is %lu bytes.\n", sizeof(long double));
    return 0;
}