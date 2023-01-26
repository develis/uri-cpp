#include <iostream>
#include <string>
using namespace std;

int main() {
    int elfs, hours, b = 0, a = 0, m = 0, d = 0;
    string name, group;
    cin >> elfs;
    for (int i = 0; i < elfs; i++) {
        cin >> name >> group >> hours;
        if (group == "bonecos") {
            b += hours;
        } else if (group == "arquitetos") {
            a += hours;
        } else if (group == "musicos") {
            m += hours;
        } else if (group == "desenhistas") {
            d += hours;
        }
    }

    cout << b / 8 + a / 4 + m / 6 + d / 12 << endl;
    return 0;
}