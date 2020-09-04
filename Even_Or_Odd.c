// C program to find a number if it is even or odd

# include <stdio.h>

int main ()
{
    int input;
    printf("Enter a number to see if it is even or odd\n");
    scanf("%d", &input);
    if(input%2 == 0){
        printf("%d is am even number\n", input);
    }

    else
    {
        printf("%d is an odd number.\n", input);
    }
    
    return 0;
}