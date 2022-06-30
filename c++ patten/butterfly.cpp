#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "Enter the number of row: ";
    cin >> n;
    for (int t = 1; t <= 2; t++) {
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= 5; k++) {
                cout << "   ";
                for (int j = 1; j <= 2 * n; j++) {
                    if (j <= i || j > 2 * n - i) {
                        cout << " *";
                    } else {
                        cout << "  ";
                    }
                }
            }
            cout << "\n";
        }

        for (int i = n; i >= 0; i--) {
            for (int k = 1; k <= 5; k++) {
                cout << "   ";
                for (int j = 1; j <= 2 * n; j++) {
                    if (j <= i || j > 2 * n - i) {
                        cout << " *";
                    } else {
                        cout << "  ";
                    }
                }
            }
            cout << "\n";
        }
        cout << "\n\n\n";
    }
    return 0;
}