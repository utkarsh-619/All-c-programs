#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0 ; j < n-i; j++)
        {
            int sum=0;
            for (int k = 0; k <=j; k++)
            {
                sum+=arr[k+i];
            }
           
            cout << sum<<endl;
        }
    }

    return 0;
}