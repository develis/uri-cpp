#include <iostream>
using namespace std;

int main() {
    int C[4], feijao = 0;
    for (int u = 0; u <= 3; u++){
        cin >> C[u];
        if (C[u] == 1) feijao = u + 1;
    }
    cout << feijao << endl;
    return 0;
}