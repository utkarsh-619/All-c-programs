#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a = ";
    cin >> a;
    cout << "Enter the value of b = ";
    cin >> b;

    cout << "Before swap the vale of a = " << a << " and the vale of b = " << b << endl;
    swap(a, b);
    cout << "Before swap the vale of a = " << a << " and the vale of b = " << b << endl;

    return 0;
}