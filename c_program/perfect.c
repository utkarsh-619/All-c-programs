#include<stdio.h>
void main(){
    int a,i=1,sum=0;
    printf("Enter the the value : ");
    scanf("%d",&a);

    while(i<a){
        if(a%i==0){
            sum+=i;
        }
        i++;
    }    

    if(sum==a){
        printf("perfect");
    }

    else{
        printf("not perfect");
    }
}