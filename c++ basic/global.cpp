#include <iostream>
using namespace std;
int a, b;

void change()
{

    a = a + b;
}

int main()
{

    cout << "Enter the vlue of a : ";
    cin >> a;
    cout << "Enter the vlue of b : ";
    cin >> b;
    change();
    cout << "The sum of numbers : " << a << endl;
    return 0;
}