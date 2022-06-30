#include<stdio.h>

void main(){
    int a,n,rim,x=0;
    printf("Enter the value : ");
    scanf("%d",&a);
    n=a;

    while(a>0){
        rim = a%10;
        x=x*10+rim;
        a/=10;
    }

    if(n==x)
    printf("p");


    else
    printf("N");
    
}