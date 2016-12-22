#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("ISBN: ");
    long long isbn = get_long_long();
    
   
    int tenth = isbn% 10;
    int isbn1 = isbn/10;
    
    int ninth =isbn1%10;
    isbn1 = isbn1/10;
    
    int eighth =isbn1%10;
    isbn1 = isbn1/10;
    
    int seventh =isbn1%10;
    isbn1 = isbn1/10;
  
    int sixth =isbn1%10;
    isbn1 = isbn1/10;
  
    int fifth =isbn1%10;
    isbn1 = isbn1/10;
    
    int fourth =isbn1%10;
    isbn1 = isbn1/10;
    
    int third =isbn1%10;
    isbn1 = isbn1/10;
    
    int second =isbn1%10;
    isbn1 = isbn1/10;
    
    int first =isbn1%10;
    isbn1 = isbn1/10;
    
    int total = (1*first)+(2*second)+(3*third)+(4*fourth)+(5*fifth)+(6*sixth)+(7*seventh)+(8*eighth)+(9*ninth);
    
    if (total%11==tenth)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
}
