#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get 2 numbers from user
    int x = get_int("x: ");

    int y = get_int("y: ");

    // Division
    float z = (float) x/ (float) y;

    //Print
    printf("%f\n", z);
}