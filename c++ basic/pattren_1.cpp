#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 1; j < 20 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << " ";   
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < 20 - i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}