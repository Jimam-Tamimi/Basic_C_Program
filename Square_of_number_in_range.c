# include <stdio.h>

int main ()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d --> %d\n", i, i*i);
    }
    
    return 0;
}