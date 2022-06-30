#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= 8; l++)
        {
            cout << "  ";
            for (int k = 1; k <= n - i; k++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= n; j++)
            {
                cout << " *";
            }
            for (int k = i; k > 1; k--)
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}