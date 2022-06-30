#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex add(complex, complex);

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

complex add(complex o1, complex o2)
{
    complex o3;
    o3.getdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex v1, v2, v3;
    v1.getdata(4, 6);
    v1.printf();

    v2.getdata(6, 4);
    v2.printf();

    v3 = add(v1, v2);
    v3.printf();

    return 0;
}