#include<stdio.h>

void sumarr(char arr[],int s){
    // int sum=0;
    for(int i=0;i<s;i++){
        printf("%c",arr[i]);
    }

    
}
void main(){
    char arr[]="utkarsh";
    sumarr(arr,sizeof(arr)/sizeof(arr[0]));
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     printf("%c",arr[i]);
    // }
}