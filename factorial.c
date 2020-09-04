// Program to find factorial of first n numbers
# include <stdio.h>

int main ()
{
    int factorial = 1, last_num;
    printf("Enter the last number\n");
    scanf("%d", &last_num);

    for (int i = 1; i <= last_num; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d", last_num, factorial);
    
// 1,2,3,
    return 0;
}