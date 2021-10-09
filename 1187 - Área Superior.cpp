#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double M[12][12], sum = 0, cont = 0;
    char op;
    cin >> op;
    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 12; y++) {
            cin >> M[x][y];
        }
    }
    for (int u = 0; u < 12; u++) {
        for (int z = 0; z < 12; z++) {
            if (z > u && u < 12 - z - 1) {
                sum += M[u][z];
                cont++;
            }
        }
    }
    if (op == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (op == 'M')
        cout << fixed << setprecision(1) << sum / cont << endl;

    return 0;
}