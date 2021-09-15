/*  Marathon
    The distance of a marathon in kilometers
    Nick Kruger
    September, 14, 2021
*/

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilomters.\n\n", kilometers);
	return 0;
}
