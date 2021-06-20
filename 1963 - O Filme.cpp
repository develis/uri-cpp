#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(2) << (100.0*(B-A))/A << "%" << endl;
    return 0;
}