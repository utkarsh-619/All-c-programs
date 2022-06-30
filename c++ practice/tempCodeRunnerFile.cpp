#include<iostream>
using namespace std;

int positive (int x){
    if(x<0)  return (x*(-1));
    else     return x;
}

int main(){
    int x,sum=0;
    for(int i=0;i<3;i++){
        for(int i=0;i<3;i++){
            cin>>x;
            sum+=x;
        }
    }
    cout<<positive(sum-45);
}