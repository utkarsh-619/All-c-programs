#include <iostream>
using namespace std;

class complex
{
    int a;
    float b;

public:
    complex()
    {
        a = 0;
        b = 0;
        // cout << "hello world!!" << endl;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x, float y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printf()
    {
        cout << "Your compex number is = " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    int x;
    int y;
    cout << "Enter the the real part of complex number : " << endl;
    cin >> x;
    cout << "Enter the the imaginary part of complex number : " << endl;
    cin >> y;

    complex c1(x, y), c2( 9, (float)9.9), c3(8);k
    c1.printf();
    c2.printf();
    c3.printf();

    return 0;
}