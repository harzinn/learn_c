/*	Function variable practice
 *	11/30/2021
 *	Nick K
 */

#include <stdio.h>

int compute_sum_to_n(int n);

int main(void)
{
	int a;
	printf("\nValue to compute: ");
	scanf("%d", &a);
	printf("\n%d\n\n", compute_sum_to_n(a));
	return 0;
}

int compute_sum_to_n(int n)
{
        int sum = 0;
        for (; n>0; n--)
        {
                sum += n;
        }
        return sum;
}
