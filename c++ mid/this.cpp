#include<iostream>
using namespace std;

class A{
    int a;

    public:
        A& setdata(int a){
            this->a=a;
            return *this;
        } 
        
        void printdata(){
            cout<<"the value of a : "<<a<<endl;
        }
};

int main(){
    A x;
    x.setdata(4).printdata();
    
    return 0;
}