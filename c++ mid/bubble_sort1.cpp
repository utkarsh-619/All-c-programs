#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}