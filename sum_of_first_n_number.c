// Program to find sum of first n numbers
# include <stdio.h>

int main()
{

   int a=0, sum = 0, n, o;
   printf("Enter a value.\n");
   scanf("%d", &n);
    o = n;

    // with while loop

    while (a <= n)
    {
        sum = sum + n;
        n--;
    }




    // // using do while loop.

    // do{
    //     sum = sum +n;
    //     n--;
    // }while(a <= n);
   printf("The sum of first %d number %d ",o, sum);
   
    return 0;
}