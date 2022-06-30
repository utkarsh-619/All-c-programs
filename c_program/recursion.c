#include<stdio.h>

int fac(int n){
    if(n==1){
        return 1;
    }

    return (n*fac(n-1));
}

void main(){
    int n;
    printf("Enter the value of number which you want to get factorial:");
    scanf("%d",&n);

    printf("\n\nThe value of factorial %d is -> %d",n,fac(n));

}