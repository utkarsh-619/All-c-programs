#include<iostream>
using namespace std;

int add(int a,int b){
    return (a+b);
}

int hello(void){
    cout<<"hello"<<endl;
}

int main(){
    int a=3,b=4;
    int (*ptr)(int,int);
    int (*pt)();                // i don't know why it's always 1 ???
    pt=&hello;                  // i don't know why it's always 1 ???
    ptr=&add;
    cout<<ptr<<endl<<pt<<endl;
    cout<<(*ptr)(a,b);
    return 0;
}