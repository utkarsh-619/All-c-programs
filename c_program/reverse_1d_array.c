#include <stdio.h>

void reverse(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int n;
  printf("How much value you want to put in array");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter values of array[%d]:",i+1);
    scanf("%d",&arr[i]);
  }
  for(int j=0;j<(n/2);j++){
    reverse(&arr[j],&arr[n-1-j]);
  }
  for(int i=0;i<n;i++){
    printf("After reverse the value of array[%d]:%d\n",i+1,arr[i]);
  }
  return 0;
}