// Program to find factorial of first n numbers
# include <stdio.h>

int main()
{

    int a = 1, factotial = 1, n, o;
    printf("Enter a number.\n");
    scanf("%d", &n);
    o = o + n;
    while (a <= n)
    {
        factotial = factotial * n;
        n--;
    }
    

   printf("The factorial of first %d number %d ",o, factotial);
   
    return 0;
}