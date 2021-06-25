#include <iostream>
#include <iomanip>
using namespace std;
//km vh -> montanha / pessoas(anoes+2)
int main() {
    double N, X;
    cin >> N >> X;
    cout << fixed << setprecision(2) << X/(N+2) << endl;
    return 0;
}