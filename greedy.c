#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float change = get_float();
 
    if (change <= 0)
    {
    printf("O hai! How much change is owed?\n");
    change = get_float();
    }
   change = change+.001;
    int change_in_integers = change * 100;
    
    int quarter_number = change_in_integers / 25;
    int new_amount1 = change_in_integers-(quarter_number*25);
    
    int dime_number = new_amount1/ 10;
    int new_amount2 = new_amount1-(dime_number*10);
    
    int nickels_number = new_amount2/5;
    int new_amount3 = new_amount2-(nickels_number*5);
    
    int pennies_number = new_amount3/1;
    
    int total = quarter_number+dime_number+nickels_number+pennies_number;
    printf("%i\n", total);
}