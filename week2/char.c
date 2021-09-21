/*  Char in C
    Nick K
    Sep 21, 2021
*/

#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c  the character %c\n", c);
    printf("Three consecutirve chars are : %c%c%c \n", c, c+1, c+2);
    printf("Three bell ring chars are : %c%c%c \n", '\a', '\a', '\a');
    return 0;
}