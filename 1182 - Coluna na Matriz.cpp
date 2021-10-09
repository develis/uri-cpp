#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int col;
    char op;
    float M[12][12], sum;
    cin >> col;
    cin >> op;
    for (int u = 0; u < 12; u++) {
        for (int z = 0; z < 12; z++) {
            cin >> M[u][z];
        }
    }
    for (int x = 0; x < 12; x++) {
        sum += M[x][col];
    }
    if (op == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if (op == 'M')
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    return 0;
}