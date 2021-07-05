#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    if ((B+C) > A && (A+C) > B && (B+A) > C) cout << fixed << setprecision(1) << "Perimetro = " << A + B + C << endl;
    else cout << fixed << setprecision(1) << "Area = " << ((A+B)*C)/2 << endl;

    return 0;
}