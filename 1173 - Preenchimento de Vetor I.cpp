#include <iostream>
using namespace std;

int main() {
    int u, V;
    int N[10];
    cin >> V;
    N[0]=V;
    cout << "N[0] = " << N[0] << endl;
    for (u=1;u < 10; u++){
        V = V*2;
        cout << "N[" << u << "] = " << V << endl;
    }
    return 0;
}