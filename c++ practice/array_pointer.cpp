#include<iostream>
using namespace std;


int sumofarr(int a[],int size){
    int sum=0;
    // int size1 = sizeof(a)/sizeof(a[0]); // this shows an warning because of it is a pointer not an array ;;;;;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}  

int main(){
    int A[5]={4,2,5,8,1};
    int *ptr;
    ptr = A;
    int size = sizeof(A)/sizeof(A[0]);

    // for(int i=0;i<5;i++){
    //     printf("Addres = %d , %d\n",&A[i],(A+i));
    //     printf("Value = %d , %d\n\n\n",A[i],*(A+i));
    //     printf("Addres = %d , %d\n",&ptr[i],(ptr+i));
    //     printf("Value = %d , %d\n",ptr[i],*(ptr+i));
    // }

    cout<<sumofarr(A,size);
    return 0;

}