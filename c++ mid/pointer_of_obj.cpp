#include <iostream>
using namespace std;

class cilender
{
    string name;
    int prize;

public:
    void setdata(string x, float y)
    {
        name = x;
        prize = y;
    }

    void printdata()
    {
        cout << name << " cilender ka prize hai = " << prize << endl;
    }
};

int main()
{
    float prize;
    string name;

    // cilender a;
    // cilender *ptr;
    // ptr = &a;
    // (*ptr).setdata(name,prize);
    // (*ptr).printdata();

    cilender *p;
    p = new cilender[3];
    

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the name of cilender : ";
        cin >> name;
        cout << "Enter the prize of cilender : ";
        cin >> prize;
        (p+i)->setdata(name,prize);
        
    }

    for (int i = 0; i < 3; i++)
    {
        (p+i)->printdata();
        
    }

    return 0;
}