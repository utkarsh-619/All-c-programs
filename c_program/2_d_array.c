#include<stdio.h>

void main(){
    int n=3,m=3;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the value of element %d,%d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\nThe value of element %d,%d is = %d",i,j,arr[i][j]);
        }
    }
    
}