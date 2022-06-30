#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Eenter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j;j--){
            cout<<j<<"   ";    
        }
        cout<<"\n";
    }
    return 0;
}