#include <iostream>
using namespace std;

class A
{
    int id; // do private mamber id and age::::
    int age;

public:
    void setage(int a)
    {
        age = a;  // methord to set age:::: 
    }

    void setboth(int a, int b)
    {
        id = a;   //methord to set id and age:: 
        age = b;
    }

    void setid(int a)
    {
        id = a;      // methord to set id ::::::::
    }
    A() {}        // a default consturtor::::::
    A(int a)
    {
        id = a;          // prametraized consturtoer::::
    }

    void printf()
    {
        cout << "Your id id = " << id << " and your age is = " << age << endl;  ////methord to print data::::
    }

    // there i will make an oprerater in class:::

    bool operator == (A &x)
    {
        if (id == x.id && age == x.age)
        {
            return true;   //  operator overloading :::::::
        }

        else
        {
            return false;
        }
    }

    
    
    int a;
};

int main()
{
    A a1, a2, a3;
    a1.setboth(1, 23);
    a2.setboth(2, 21);
    a3.setboth(3,22);
    // a3 = a1;

    if (a1 == a3)
    {
        cout << "same" << endl;
    }
    else
    {

        cout << "not same" << endl;
    }
    a2.a=10;
    cout<<a2.a<<endl;
    a1.printf();
    a2.printf();
    a3.printf();
    return 0;
}