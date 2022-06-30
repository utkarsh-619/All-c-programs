#include<stdio.h>

void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}




void main(){
    int arr[3][3],temp[9],i=0,j=0,k=0;
    

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value of element %d %d:",i,j);
            scanf("%d",&arr[i][j]);


            temp[k] =arr[i][j];
            k++;
        }
    }



    for(k=0;k<9/2;k++){
        swap(&temp[k],&temp[9-1-k]);
    }

    k=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            arr[i][j]=temp[k];
            k++;

            printf("The value of element %d %d = %d\n",i,j,arr[i][j]);
        }
    }
}