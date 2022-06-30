#include <iostream>
using namespace std;

class emp
{
private:
    int a, b, c;

public:
    int e, f;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
        cout << "The value of c = " << c << endl;
        cout << "The value of f = " << e << endl;
        cout << "The value of e = " << f << endl;
    }
};

void emp::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    emp x;
    x.e = 10;
    x.f = 20;
    x.setdata(2, 6, 9);
    x.getdata();

    return 0;
}