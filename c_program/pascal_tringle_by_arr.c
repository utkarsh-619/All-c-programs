#include<stdio.h>

void main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            printf("   ");
        }

        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                arr[i][j]=1;
                printf("   %3d",arr[i][j]);
                continue ;
            }


            arr[i][j]=arr[i-1][j] + arr[i-1][j-1];
            printf("   %3d",arr[i][j]);
        }
        printf("\n");
    }
}