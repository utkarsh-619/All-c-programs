#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *b = &a;
    // Pointer
    cout << "The value of a is = " << a << endl;
    cout << "The address of a is = " << &a << endl;
    cout << "The value of b is = " << b << endl;

    // pointer to ponter

    int **c;
    c = &b;

    cout << "The value of a is = " << **c << endl;
    cout << "The address of a is = " << &a << endl;
    cout << "The value of b is = " << b << endl;
    cout << "The value of b is = " << *c << endl;
    cout << "The value of c is = " << c << endl;
    cout << "The address of b is = " << &b << endl;
    cout << "The value of a using c is = " << **c << endl;
    cout << "The value of a using b is = " << *b << endl;

    return 0;
}