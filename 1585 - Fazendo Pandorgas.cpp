#include <iostream>
using namespace std;

int main() {
    int N, x, y;
    cin >> N;
    for (int u = 0; u < N; u++){
        cin >> x >> y;
        cout << x*y/2 << " cm2" << endl;
    }
    return 0;
}