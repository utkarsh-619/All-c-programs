#include<iostream>
using namespace std;

class A{
    private:
    int x;
    public:
    int y;
};

class B{
    int p;
    public:
    int q;
};

         //drived/child class                   //base / parent class  
// class {{class name}} : {{public or private}} {{base class name}}
// ex of single inheritance 
class C : public A{
    int m;
    public:
    int n;
};

// multiple inheritance:::
class D : public A,private B{

    int j;
    public:
    int k;
    void printf(){
        cout<<y<<q<<endl;

    }

};


// multi level inheritance::: parent class == direct C and inderict A:::::

class E : public C{
    int g;
    public:
    int f;  
};





int main(){

    E a;
    a.n;
    return 0;
}