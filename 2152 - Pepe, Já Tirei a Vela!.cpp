#include <iostream>

using namespace std;

int main() {
    int cases, hour, min, on_off;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> hour >> min >> on_off;
        if (on_off == 1) {
            if (hour < 10) {
                cout << "0" << hour;
            } else {
                cout << hour;
            }
            cout << ":";
            if (min < 10) {
                cout << "0" << min;
            } else {
                cout << min;
            }
            cout << " - A porta abriu!" << endl;
        } else {
            if (hour < 10) {
                cout << "0" << hour;
            } else {
                cout << hour;
            }
            cout << ":";
            if (min < 10) {
                cout << "0" << min;
            } else {
                cout << min;
            }
            cout << " - A porta fechou!" << endl;
        }
    }
    return 0;
}