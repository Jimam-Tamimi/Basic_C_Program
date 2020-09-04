# include <stdio.h>

void mullti_table(int n);

int main ()
{
    int n;
    printf("Enter a number ro get the multiplication table\n");
    scanf("%d", &n);
    mullti_table(n);

    return 0;
}


void mullti_table(int n){
    printf("Multiplication table of %d\n", n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
}