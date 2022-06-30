#include<iostream>
#include<math.h>
using namespace std;

class base{
    protected:
        int x;
    public:
       void print(){
           cout<<"x = "<<x<<endl;
       }
};

class drive : protected base{
    int y;
    public:
        void outc(){
            print();
        }
};

int main(){
    base a;
    a.print();

    drive b;
    b.outc();
    
    return 0;
}