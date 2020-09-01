// Program to check if you can drive
# include <stdio.h>
int main()
{
    int age;
    printf("Enter your age.\n");
    scanf("%d", &age);

    if(age < 0){
        printf("You are telling us that you are %d !! which is quite impossible. Invalid age.!!", age);
    }

    
    else if (age > 160){
        printf("You are telling us that you are %d !! which is quite impossible. Invalid age.!!", age);
    }
    
    
    else if (age > 140){
        printf("You are lying..Right?? Your age is %d .!! And if you are not lying then you can not drive and if you can you should not drive.",age);
    }

    
    else if (age > 70){
        printf("You are now %d. You showld not drive",age);
    }
    
    
    else if (age >= 18){
        printf("Congrats... You can drive.",age);
    } 

    
    else if (age < 18){
        printf("In the age of %d you can not drive. You have to be 18 or above",age);
    }
    
    
    return 0;
}