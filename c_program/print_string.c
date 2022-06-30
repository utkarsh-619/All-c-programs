#include<stdio.h>

void main(){

    /* first way to print string----->>>>
    char str[]="utkarsh awasthi";
    char *ptr=str;
    int count=0;
    while(*ptr!='\0'){

        printf("%c",*ptr);
        ptr++;

    }*/

    /* second way to print string , but in this way you can't use space------->>>>
    char str[30];
    printf("Enter your name:");
    scanf("%s",&str);

    printf("Your name is --> %s",str);*/

    // third and best way to input a string and print it-------->>>>>>

    char str[30];
    printf("Enter your name-");
    gets(str);

    char *ptr=str;
    int count=0;

    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    printf("the size of string is = %d",count);
    //printf("your name is = %s",str);
    printf("your name is =");
    puts(str);
}