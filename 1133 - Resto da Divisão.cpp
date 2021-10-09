#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    if (x > y) {
        for (int u = y + 1; u < x; u++) {
            if (u % 5 == 2 || u % 5 == 3) cout << u << endl;
        }
    } else {
        for (int u = x + 1; u < y; u++) {
            if (u % 5 == 2 || u % 5 == 3) cout << u << endl;
        }
    }
    return 0;
}