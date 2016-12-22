#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf("C:");
    float c =  get_float();
    float f = ((c*9)/5)+32;
    printf("F: %.1f\n", f);
}
