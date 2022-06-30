#include<stdio.h>
#include<string.h>

typedef struct date{
    int day;
    int mounth;
    int year;
}date;

int datecmp(date *ptr1,date *ptr2){
    if ((*ptr1).year > (*ptr2).year){
        return 1;
    }
    if((*ptr1).year < (*ptr2).year){
        return 2;
    }

    if ((*ptr1).mounth > (*ptr2).mounth){
        return 1;
    }
    if((*ptr1).mounth < (*ptr2).mounth){
        return 2;
    }

    if ((*ptr1).day > (*ptr2).day){
        return 1;
    }
    if((*ptr1).day < (*ptr2).day){
        return 2;
    }
    
}

void main(){

    date d1,d2;
    printf("Enter first date :");
    scanf("%d",&d1.day);

    printf("mounth :");
    scanf("%d",&d1.mounth);

    printf("year :");
    scanf("%d",&d1.year);

    printf("Enter second date :");
    scanf("%d",&d2.day);

    printf("mounth :");
    scanf("%d",&d2.mounth);

    printf("year :");
    scanf("%d",&d2.year);

    int a=datecmp(&d1,&d2);

    if(a==1){
        printf("%.2d/%.2d/%d is bigger date",d1.day,d1.mounth,d1.year);
    }
    
    if(a==2){
        printf("%.2d/%.2d/%d is bigger date",d2.day,d2.mounth,d2.year);
    }
    else{
        printf("both date are same");
    }

}