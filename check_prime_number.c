// Program to check a number is a prime number or not 
# include <stdio.h>

int main ()
{
    int number, check;
    printf("Enter a number to check if it is a prime number or not\n");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            check = 1;
            break;
        }
        
    }

    if (number == 0 || number == 1){
        printf("%d is not a prime number.\n", number);
    }

    else if (check == 1){
        printf("%d is not a prime number.\n",number);

    }
    
    else
    {
        printf("%d is a prime number.\n", number);
    }
    
    return 0;
}