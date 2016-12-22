#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
    // seed PRNG
    srand(time(NULL));
    
    // pick pseudorandom number in [0,1023]
    int skittles = random % 1024;
    
    //TODO
    printf("O hai! I'm thinking of a number between 0 and 1023. Whatis it?");
    int n =get_int();
    while ( n<skittles)
    {
        printf("Nope! there are way more skittles than that. guess again");
        n = get_int();
    }
    while (n>skittles)
    {
        printf(No)
    }