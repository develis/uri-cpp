#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, delta;
    cin >> A >> B >> C;
    delta = pow(B, 2) - (4*A*C);
    if (A == 0 || delta < 0){ 
        cout << "Impossivel calcular" << endl;
    } else {
        cout << "R1 = " << fixed << setprecision(5) << (-B + sqrt(delta))/(2*A) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-B - sqrt(delta))/(2*A) << endl;
    }
    return 0;
}