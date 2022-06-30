#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"usind 2 var"<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"usind 3 var"<<endl;
    return a+b+c;
}

int sum(int a,int b,int c,int d){
    cout<<"usind 4 var"<<endl;
    return a+b+c+d;
}

int main(){
    cout<<"The value of a+b: "<<sum(6,7)<<endl;
    cout<<"The value of a+b+c: "<<sum(6,4,7)<<endl;
    cout<<"The value of a+b+c+d: "<<sum(45,6,4,7)<<endl;
    return 0;
}