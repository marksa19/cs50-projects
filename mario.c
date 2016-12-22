#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
printf("Height: ");
int height = get_int();

while (height < 0 || height > 23)
{
    printf("Height: ");
    height = get_int();
}

for(int counter=0; counter<height; counter++)
{
   for (int space=height-2-counter; space >=0;space--)
   {
       printf(" ");
   }
    for(int pound=0; pound<counter+2; pound++)
    {
        printf("#");
    }
    printf("\n");
}
}