#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A[100];
    int u;
    for (u=0; u < 100; u++){
        cin >> A[u];
        }
        for (u=0; u < 100; u++){
        if (A[u] <= 10){
            cout << fixed << setprecision(1) << "A[" << u << "] = " << A[u] << endl;
        }
    }
    return 0;
}