#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout << "Enter the num which you want to search: ";
    cin >> key;

    int s=0,e=n;
    while(s<=e){

        int mid = (s+e)/2;

        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        
        if(arr[mid]<key){
            s=mid+1;
        }

        if(arr[mid]>key){
            e=mid-1;
        }


    }

    if(s>e)
    cout<<"error 404 found";
    


    return 0;
}