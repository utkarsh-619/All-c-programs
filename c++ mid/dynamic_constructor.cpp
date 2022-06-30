#include <iostream>
using namespace std;

class bank
{
    int p, r, t;
    float R, total;

public:
    bank(){}// {} this is imortent:::::::: 
    bank(int x, int y, int z);
    bank(int x, int y, float z);

    void printf()
    {
        cout << "Your principle amount is = " << p << " and after "
             << t << " years your total amount is " << total << endl;
    }
};

bank::bank(int x, int y, float z)
{
    p = x;
    r = z;
    t = y;
    total = p;
    for (int i = 0; i < t; i++)
    {
        total = total * (1 + z);
    }
}

bank::bank(int x, int y, int z)
{
    p = x;
    R = z;
    t = y;
    total = p;
    for (int i = 0; i < t; i++)
    {
        total = total * (1 + R / 100);
    }
}

int main()
{
    bank b1, b2;
    int a, b, c;
    float r;

    b1 = bank(100, 1, 5);
    b1.printf();

    b2 = bank(100, 1, (float)0.05);
    b2.printf();

    return 0;
}