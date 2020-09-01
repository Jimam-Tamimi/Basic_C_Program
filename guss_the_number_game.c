// This is a game and you have to guess the number between 1 to 100!!
# include <stdio.h>
# include<stdlib.h>
# include <time.h>
int main ()
{
    int rand_num_gen, user_input, try_again = 0, i=1;
    srand(time(0));
    rand_num_gen = rand() % 100 +1;
    // printf("%d\n", rand_num_gen);

    printf("Enter a number between 1 to 100\n");

    do
    {
        scanf("%d", &user_input);
        if (user_input > rand_num_gen){
            printf("Enter a lower number please\n");
        }

        else if (user_input < rand_num_gen){
            printf("Enter a higher number please\n");
        }

        else if (user_input == rand_num_gen){
            printf("You have won and entered the right number...And you took %d attempts to guess\n", i);
            
        }
        i++;
        
    }while(user_input != rand_num_gen);  
    

    

    return 0;
}
