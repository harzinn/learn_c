#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n = 5;

    for (int i=1; i<=n; i++)
    {
        sum = sum + i;
        printf("The sum is %d, i is %d\n", sum, i);
    }
    return 0;
}