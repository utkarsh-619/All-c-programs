#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of row: ";
    cin >> n;
    int j;
    for (int i = 1; i <= n; i++) {
        cout<<"\t\t\t";
        j = n;
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
            j--;
        }

        for (int k = 1; k <= i; k++) {
            cout << " " << j;
            j--;
        }

        j++;
        for (int k = 1; k < i; k++) {
            j++;
            cout << " " << j;
        }

        cout << endl;
    }
    return 0;
}