#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double v, d, area = 0, height = 0;
    while (cin >> v >> d) {
        area = 3.14 * pow((d / 2), 2);
        height = v / area;
        cout << fixed << setprecision(2) << "ALTURA = " << height << endl;
        cout << fixed << setprecision(2) << "AREA = " << area << endl;
    }
    return 0;
}