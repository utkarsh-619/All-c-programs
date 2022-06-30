#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n=6,arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    cout<<"max number till 0 "<<"="<<setw(2)<<max<<endl;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"max number till "<<i<<" ="<<setw(2)<<max<<endl;
    }

    return 0;
}