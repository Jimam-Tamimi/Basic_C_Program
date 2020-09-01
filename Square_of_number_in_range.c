# include <stdio.h>
int main()
{

    int a, b;
    printf("Enter the first number to start\n");
    scanf("%d", &a);
    printf("Enter the last number to end\n");
    scanf("%d", &b);
    while (a <= b)
    {
        printf("%d --> %d\n",a,  a*a);
        a = a+1 ;
    }
    

    return 0;
}