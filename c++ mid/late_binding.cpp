#include<iostream>
using namespace std ;

class base
{

    public:
    int base_var;
    void setbase_var(int x)
    {
        base_var = x;
    }

    void display()
    {
        cout << "this is display function of base class " << base_var << endl;
    }
};

class drive : public base
{
    public:
    int drive_var;
    void setdrived_var(int x)
    {
        drive_var = x;
    }

    void display()
    {
        cout << "this is display function of drived class " << drive_var << endl;
    }

};

 
int main(){

    base * ptr;
    drive obj;

    ptr = &obj;
    ptr->base_var=3;
    // ptr->drive_var=9;
    ptr->display();
}