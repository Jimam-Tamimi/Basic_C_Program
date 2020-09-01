// // Chapter 4
// // Program to check a number is a prime number or not 

// # include<stdio.h>

// int main ()
// {
//     int num, num2 = 2, prime;
//     printf("Enter a number to check it is prime number or not.\n");
//     scanf("%d", &num);

//     while (num > num2){
//         if (num%num2==0){
//             prime = 1;
//             break;
//         }
//         num2++;
//     }

//     if (prime == 1){
//         printf("The number is not prime.\n");
//     }

//     else if (num == 1){
//         printf("The number is not a prime number.\n");
//     }

//     else if (prime != 1){
//         printf("The number is a prime number.\n");
//     }
        
//     return 0;
// }

# include<stdio.h>

int main()
{
    int num, num2 = 2, check;
    printf("Enter a value to check if it is a prime number or not.\n");
    scanf("%d", &num);
    while (num > num2)
    {
        if (num%num2 == 0)
        {
            check = 1;
            break;
        }
        num2++;
        
    }
    if (num == 1)
    {
        printf("%d is not a prime number.", num);
    }
    else if (check == 1)
    {
        printf("%d is not a prime number.", num);
    }

    else
    {
        printf("%d is a prime number.", num);
    }
    
    return 0;
}