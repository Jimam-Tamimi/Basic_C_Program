// Program to find the biger date
# include <stdio.h>

typedef struct date{
    int date;
    int mounth;
    int year;
}date;

void dateCmp(date d, date d2){
    int c;
    if (d.year < d2.year){
        c = 0;
    }

    else if (d.year == d2.year && d.mounth < d2.mounth){
        c = 0;
    }

    else if (d.year == d2.year && d.mounth == d2.mounth && d.date < d2.date){
        c = 0;
    }

    else if (d.year > d2.year){
        c = 1;
    }

    else if (d.year == d2.year && d.mounth > d2.mounth){
        c = 1;
    }

    else if (d.year == d2.year && d.mounth == d2.mounth && d.date > d2.date){
        c = 1;
    }
    
    else if (d.year == d2.year && d.mounth == d2.mounth && d.date == d2.date){
        c = 2;
    }


    if (c == 0){
        printf("%d/%d/%d is smaller than %d/%d/%d", d.date, d.mounth, d.year, d2.date, d2.mounth, d2.year);
    }

    
    if (c == 1){
        printf("%d/%d/%d is greater than %d/%d/%d", d.date, d.mounth, d.year, d2.date, d2.mounth, d2.year);
    }

    
    if (c == 2){
        printf("%d/%d/%d and %d/%d/%d are equal.\n", d.date, d.mounth, d.year, d2.date, d2.mounth, d2.year);
    }
    
    
    
}


int main (){
    date d1, d2;
    printf("Enter the 1st date, mounth and year.\n");
    printf("Date : ");
    scanf("%d", &d1.date);
    printf("Mounth : ");
    scanf("%d", &d1.mounth);
    printf("Year : ");
    scanf("%d", &d1.year);

    printf("Enter the 2nd date, mounth and year.\n");
    printf("Date : ");
    scanf("%d", &d2.date);
    printf("Mounth : ");
    scanf("%d", &d2.mounth);
    printf("Year : ");
    scanf("%d", &d2.year);

    dateCmp(d1, d2);


    return 0;
    
    
}