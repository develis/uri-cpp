#include <iostream>
using namespace std;

int main() {
    int X, Y, sum = 0;
    cin >> X;
    cin >> Y;
    if (Y > X) {
        for (int u = X; u <= Y; u++) {
            if (u % 13 != 0) {
                sum += u;
            }
        }
    } else if (X > Y) {
        for (int u = Y; u <= X; u++) {
            if (u % 13 != 0) {
                sum += u;
            }
        }
    }
    cout << sum << endl;
    return 0;
}