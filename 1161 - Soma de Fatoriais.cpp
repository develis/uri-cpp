#include <iostream>
using namespace std;

int main() {
    long long int x, y, fatx = 1, faty = 1;
    while (cin >> x >> y){
        for (int u = 1; u <= x; u++){
            fatx *= u;
        }
        for (int j = 1; j <= y; j++){
            faty *= j;
        }
        cout << fatx + faty << endl;
        fatx = 1.0;
        faty = 1.0;
    }
    return 0;
}