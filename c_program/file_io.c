#include<stdio.h>

int main(){
    int a=76;
    FILE *ptr;
    // ptr = fopen("sample.txt", "r");    // --> for reading the file 
    ptr = fopen("sample.txt", "w");      // -->  for writing the file ,if there is no such file than it will create it
    //fscanf(ptr,"%d",&a);                //       for reading the file 
    fprintf(ptr,"the value of a= %d \n DONE",a);
    fclose(ptr);
    return 0;
}