// C program to find a number if it is even or odd

# include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check if it is even or odd:\n");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("The number you have entered is even.");
    }
    else
    {
        printf("The number you have entered is odd.");
    }
    
    return 0;
}