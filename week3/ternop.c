/*  Ternary operator and flow control
    Harzinn
    Oct 24, 2021
*/

#include <stdio.h>

int main(void)
{
    int speed;
    printf("\nEnter your speed as an integer: ");
    scanf("%d", &speed);
    speed = (speed <= 65)? (1) :(speed <=70)? (2) : (3);
    switch (speed)
    {
        case 1: printf("\nNo Speeding Ticket\n\n");break;
        case 2: printf("\nSpeeding Ticket\n\n");break;
        case 3: printf("\nExpensive speeding ticket\n\n");break;
        default: printf("\nIncorrect speed\n\n"); //unneeded
    }
    return 0;
}