#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
printf("Days in Month:");
int days = get_int();
while (days > 31 || days <28)
{
printf("Days in Month:");
days = get_int();
}

printf("Pennies on first day:");
int pennies = get_int();
while (pennies <= 0)
    {
    printf("Pennies on first day:");
            pennies = get_int();
    }
double exp(double x);
long double dollars = pennies*(1-pow(2,days))/-100;
printf("$%.2Lf\n", dollars);
}
