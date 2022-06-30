#include<stdio.h>

void main(){
    int n,i;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        printf("1/%d + ",i*i);
    }
    printf(". . . . . . 1/n*n");
    
}