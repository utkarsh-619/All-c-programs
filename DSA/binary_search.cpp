#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int kya){
    int head=0,mid;
    size--;
    while(head<=size){
        mid=(head+size)/2;
        // cout<<mid<<endl;
        if(arr[mid]==kya){
            return mid;
        }

        else if(arr[mid]>kya){
            size=mid-1;
        }
        else if(arr[mid]<kya){
            head=mid+1;
        }
    }

    return -1;

}

int main(){
    int arr[]={1,2,3,4,5,6,7,10,18,20,67};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<binary_search(arr,size,2);



    return 0;
}