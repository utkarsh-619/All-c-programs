#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the num which you want to search:" << endl;
    cin >> key;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
            break;
        }
    }

    if (i == n)
    {
        cout << "error 404 found";
    }
    return 0;
}