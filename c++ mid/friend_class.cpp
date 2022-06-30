#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend class calculater;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void printf()
    {
        cout << "Your complex number is = " << a << " + " << b << "i" << endl;
    }
};

class calculater
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumcomplex(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};

int main()
{
    complex o1, o2;
    o1.getdata(5, 4);
    o1.printf();

    o2.getdata(9, 8);
    o2.printf();

    calculater c;
    int ans = c.sumcomplex(o1, o2);
    cout << "Your ans = " << ans;
    return 0;
}