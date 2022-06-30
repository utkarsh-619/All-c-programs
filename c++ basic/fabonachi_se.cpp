#include <iostream>
using namespace std;

int fab(int a)
{
    if (a == 0)
    {
        return 0;
    }

    if (a == 1)
    {
        return 1;
    }

    return fab(a - 1) + fab(a - 2);
}

int main()
{
    int a, x;

    cout << "Enter the number which you want to get ";
    cin >> a;
    x = fab(a);

    cout << "The value of " << a << "th number serious = " << x;

    return 0;
}