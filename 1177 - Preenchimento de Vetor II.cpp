#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N[1000], u, T, x;
    x = 0;
    cin >> T;
    for (u = 0; u < 1000; u++){
        N[u] = x;
        x++;
        if (x == T){
            x = 0;
        }
    }
    for (u = 0; u < 1000; u++){
        cout << "N[" << u << "] = " << N[u] << endl;
    }
    return 0;
}