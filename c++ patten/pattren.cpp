#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8-i;j++){
            cout<<" ";
        }

        for(int j=0;j<i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}