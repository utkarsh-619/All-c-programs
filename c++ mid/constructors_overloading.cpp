#include<iostream>
using namespace std;

class avi{
    int a,b;
    public:
    avi(){
        a=0,b=0;
    }
    avi(int x,int y=0){
        a=x;
        b=y;
    }

    void printf(){
        cout<<"your value is = "<<a<<" and "<<b<<endl;
    }
};

int main(){
    avi v1(5,4),v2(2),v3;
    v1.printf();
    v2.printf();
    v3.printf();

    return 0;
}