#include<iostream>
using namespace std;

int main(){
    
    int n=5;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of element "<<i<<": "<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];

            }
        }
    }

    cout<<"The sorted array is = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}