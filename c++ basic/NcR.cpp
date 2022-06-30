#include <iostream>
using namespace std;

int fac(int a)
{
    if (a == 0)
    {
        return 1;
    }

    for (int i = a - 1; i > 1; i--)
    {
        a = a * i;
    }
    return a;
}

int main()
{
    int n, r, ncr;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    if (r > n)
    {
        cout << "r is greater than n and it is not posible";
    }
    else
    {
        cout << "The value of " << n << "C" << r << " is =" << fac(n) / (fac(r) * fac(n - r));
    }

    return 0;
}