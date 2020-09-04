// C program to find even and odd numbers in an array

# include <stdio.h>
void check(int arr[], int n);

int main ()
{
    int array[] = {88, 5, 55, 35, 78, 35, 52, 37, 64, 32, 21, 15};
    check(array, 12);
    return 0;
}



void check(int arr[], int n){

    // This works for even numbers
    int even_counter = -1;
    int even_array[n];
    for (int i = 0; i < n; i++){
        if (arr[i]%2==0 && arr[i]!=0){
            even_counter++;
            even_array[even_counter] =  arr[i];
        }
        
    }
    printf("%d even numbers in the array.\n", even_counter+1);
    for (int k = 0; k <= even_counter; k++){
        printf("%d, ", even_array[k]);
    }

    // This works for odd numbers
    int odd_counter = -1;
    int odd_array[n];
    for (int i = 0; i < n; i++){
        if (arr[i]%2!=0 && arr[i]!=0){
            odd_counter++;
            odd_array[odd_counter] =  arr[i];   
        }
        
    }
    printf("\n%d odd numbers in the array.\n", odd_counter+1);
    for (int k = 0; k <= odd_counter; k++){
        printf("%d, ", odd_array[k]);
    }
       
}