#include <iostream>
using namespace std;

class data
{
    int x;

public:
    data(){}
    data(int a){
        x=a;
    }

    data(data &o){
        cout<<"copy hoa hai !!"<<endl;
        x=o.x;
    }

    void printf()
    {
        cout << "Your number is = " << x << endl;
    }
};

int main()
{
    data a,b(23);
    a.printf();
    b.printf();
    
    data c(b);
    c.printf();
    
    return 0;
}