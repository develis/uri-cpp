#include <iostream>
using namespace std;

int main() {
    int T, c = 0, r[5];
    cin >> T;
    for (int u = 0; u < 5;u++){
        cin >> r[u];
        if (r[u] == T){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}