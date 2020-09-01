// This is a program to check if it is a leap year or not..
# include <stdio.h>

int main ()
{
    int year;
    printf("Enter a year.\n");
    scanf("%d", &year);

    if (year%100==0 && year%400==0)
    {
        printf("The year is %d and it is a leap year!!",year);
    }  

    else if (year%100!=0 && year%4==0)
    {
        printf("The year is %d and it is a leap year!!",year);
    } 

 
        


    else
    {
        printf("It is %d. Which is not a leap year.", year);
    }
    
    
    return 0;
}