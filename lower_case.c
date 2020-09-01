//Program to see a number is locarcase or not
#include<stdio.h>
int main ()
{
    char input;
    printf("Enter a carecter.\n");
    scanf("%c", &input);
    if (input <= 122 && input >= 97) 
    {
        printf("The char is lowercaseed.");
    }

    else
    {
        printf("This is not lowercaseed");
    }
    
    
    return 0;
}