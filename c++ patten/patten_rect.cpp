#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of row: ";
    cin >> m;
    cout << "Enter the number of column: ";
    cin >> n;

    // for rectangle without space::::
    // for(int i =1;i <=m;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // for rectangle with space:::::

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == 2 || i == m || i == (m - 1) || j == 1 || j == 2 || j == n || j == (n - 1)) {
                cout << " *";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}