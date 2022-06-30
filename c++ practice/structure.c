#include<stdio.h>

typedef struct student{
    char name[20];
    int class;
    char section;
    int roll;
}st;

void display(st temp){
    printf("Class = %d , section = %c , roll no. = %d", temp.class,temp.section , temp.roll);
}

int main(){
    st a;
    scanf("%d %c %d", &a.class,&a.section,&a.roll);
    display(a);
}