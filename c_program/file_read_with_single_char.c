#include<stdio.h>

void main(){
    char c;
    FILE *ptr;
    ptr = fopen("utkarsh.txt","r");
    c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }

}