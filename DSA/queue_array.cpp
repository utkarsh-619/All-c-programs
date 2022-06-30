#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[(i+1)%5];
    }
for(int i=0;i<15;i++){    
        cout<<arr[(i+1)%5]<<" ";
        if((i+1)%5==0){
            cout<<endl;
        }
    }
    return 0;
}