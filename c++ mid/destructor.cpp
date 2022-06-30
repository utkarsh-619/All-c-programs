#include<iostream>
using namespace std;

int cont=0;

class data{
    public:
    data(){
        cont++;
        cout<<"This is construtor "<<cont<<endl;
    }

    ~data(){
        cout<<"This is destructor "<<cont<<endl;;
        cont--;
    }
};

int main(){
    cout <<"We are on main"<<endl;

    data d1;
    {
        cout<<"now we are on block "<<endl;
        data d2,d3;
        cout<<"now we are going to exit block"<<endl;
    }
    cout<<"before return"<<endl;
    return 0;
    cout<<"after return"<<endl;
