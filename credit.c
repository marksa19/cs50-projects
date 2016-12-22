#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Number:");
    long long number =get_long_long();
    long long original =number;
    while(number<0)
    {
        printf("Number:");
        number = get_long_long();
    }
    while(number<0);
    
    int counter=1;
    for(counter=1; number>1;counter++)
    {
        number= number/10;
    }
int a =original/1000000000000000;
int b= original/100000000000000;
if(b==3)
{printf("AMEX\n");}
else if (a==5)
{printf("MASTERCARD\n");}
else if(a==4)
{printf("VISA\n");}
else printf("INVALID\n");

}