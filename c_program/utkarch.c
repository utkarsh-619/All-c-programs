#include<stdio.h>

void main(){
    FILE *ptr;
    int a;
    ptr=fopen("utkarsh.txt","r");
    fscanf(ptr,"%u",&a);

    printf("%u ",a); 
    fclose(ptr);

}