// // Program to find sum of first n numbers
// # include <stdio.h>

// int main()
// {

//    int a=0, sum = 0, n, o;
//    printf("Enter a value.\n");
//    scanf("%d", &n);
//     o = n;

//     // with while loop

//     while (a <= n)
//     {
//         sum = sum + n;
//         n--;
//     }




//     // // using do while loop.

//     // do{
//     //     sum = sum +n;
//     //     n--;
//     // }while(a <= n);
//    printf("The sum of first %d number %d ",o, sum);
   
//     return 0;
// }



# include <stdio.h>
int main ()
{
    int a, sum = 0;
    printf("Enter the value of the last number\n");
    scanf("%d", &a); 

    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum); 
    //  0 , 1, 2, 3
    0,1,2,3,4,5,
    return 0;
}