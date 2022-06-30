#include<stdio.h>

void main(){
    int n,x,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        x=i*i;
        sum = sum + (x/i);
    }

    printf("The sum of series is = %d",sum);
    
}