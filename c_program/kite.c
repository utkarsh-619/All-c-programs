#include<stdio.h>

void main(){
    for(int i=0;i<=80;i++){
        for(int j=0;j<=80-i;j++){
            printf(" ");
        }

        for(int j=0;j<i;j++){
            printf(" *");
        }
        
        printf("\n");
    }

    
    
    for(int i=0;i<=80;i++){
        printf(" ");
        for(int j=0;j<=i;j++){
            printf(" ");
        }

        for(int j=0;j<80-i;j++){
            printf(" *");
        }
        
        printf("\n");
    }
}