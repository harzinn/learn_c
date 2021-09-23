/*  Sine
    Write a program that can give the sine
    of a value between 0 and 1 (non inclusive).
    Nick
    Sep 23, 2021
*/

#include <stdio.h>
#include <math.h> // allows sin operation, needs linked with -lm when compiled

int main(void)
{
    double sinInput, sinAnswer;

    printf("Input the value to calculate Sine: ");
    scanf("%lf", &sinInput);
    sinAnswer = sin(sinInput);  //use the sin function from the math library to calculate
    printf("The Sine is %lf\n", sinAnswer);
    return 0;
}