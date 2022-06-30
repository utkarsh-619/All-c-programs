#include<stdio.h>

void main(){
    int a=0,b=1,c,sum=1;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
        sum+=c;
    }
    printf("%llu",sum);
}