#include <cs50>
#include <stdio.h> 

int main(void)
{
    printf("Enter your name:");
    string name = GetString();
    printf("Hello, %s\n", name);
}
