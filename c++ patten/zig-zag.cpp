#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= 3 * n; k++) {
            if ((i + k) % (n + 1) == 0 || (i % 2 == 0 && k % (n + 1) == 0)) {
                cout << " *";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }
    return 0;
}