#include<stdio.h>
#include<string.h>
void main(){
    char str[30];
    char *ptr=str;
    int count=0;
    
    gets(str);

    while(*ptr!='\0'){
        count++;
        ptr++;
    }

    printf("The total number in string is = %d",count);
}