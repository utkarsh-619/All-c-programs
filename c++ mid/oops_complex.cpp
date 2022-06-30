#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void getval(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void getsum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        
    }
    void printcom()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

int main()
{
    complex v1,v2,v3;
    int a,b;
    cout<<"Enter the value of a for vector v1 : ";
    cin>>a;
    cout<<"Enter the value of b for vector v1 : ";
    cin>>b;
    v1.getval(a,b);
    v1.printcom();

    cout<<"Enter the value of a for vector v2 : ";
    cin>>a;
    cout<<"Enter the value of b for vector v2 : ";
    cin>>b;
    v2.getval(a,b);
    v2.printcom();

    v3.getsum(v1,v2);
    v3.printcom();
    
    return 0;
}