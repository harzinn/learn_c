/*  Count blanks, digits, and total characters
    demonstrate loop with for statement
    Harzinn
    Oct 24, 2021
*/

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0, total_chars = 0;
    int c;  // use for int value of character

    for(; (c = getchar()) != EOF; total_chars++)
    {
        if (c == ' ')
            ++blanks;
        else if ( c>= '0' && c <= '9')
            ++digits;
        else if ( (c>= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
            ++letters;
        else
            ++others;
    };

    printf(" blanks = %d, digits = %d, letters = %d, others = %d, total_chars = %d\n\n",
     blanks, digits, letters, others, total_chars);
    
    return 0;
}