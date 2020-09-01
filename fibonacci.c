// chapter 5 problem fibonacci
# include <stdio.h>

int main ()
{
    int last_num, f_num = 0, s_num = 1, to_print;
    printf("Enter the last number.\n");
    scanf("%d", &last_num);
    printf("The fibonacci sequence till %d is\n", last_num);

    for (int start_num = 0; start_num <= last_num; start_num++)
    {
        if (start_num <= 1){
            to_print = start_num;   
            // 1, 1, 1, 2, 
        }
        else{
            to_print = f_num + s_num;
            f_num  =  s_num;
            s_num = to_print;

        }
        
        printf("%d, ", to_print);
    }
    

    return 0;
}