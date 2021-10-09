#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (row + col == n - 1)
                    cout << '2';
                else if (row == col)
                    cout << '1';
                else
                    cout << '3';
            }
            cout << endl;
        }
    }
    return 0;
}