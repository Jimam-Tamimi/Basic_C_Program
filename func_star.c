# include <stdio.h>

void printStar(int n);

int main ()
{
    int input;
    printf("Enter a number.\n");
    scanf("%d", &input);
    printStar(input);
    return 0;
}


void printStar(int n){
    if (n == 1){
        printf("* \n");
        return;
    }

    printStar(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("* ");
    }
    printf("\n");
    
    
}
