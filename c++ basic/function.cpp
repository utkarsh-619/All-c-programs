#include<iostream>
using namespace std;

int sum(int &x,int &y){
    x=x+y;
}

int main(){
    int a,b;
    cout<< "Enter the value of a : ";
    cin>> a;
    cout<< "Enter the value of b : ";
    cin>> b;

    sum(a,b);
    cout<< "The value of a+b : "<<a;
    return 0;
}