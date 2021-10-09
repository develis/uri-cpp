#include <iostream>
using namespace std;

int main() {
    int N, X, Y, sum;
    cin >> N;
    for (int z = 0; z < N; z++) {
        sum = 0;
        cin >> X >> Y;
        if (X > Y){
            for (int u = Y+1; u < X; u++) if (u % 2 != 0) sum+= u;
        } else {
            for (int u = X+1; u < Y; u++) if (u % 2 != 0) sum+= u;
        }
        cout << sum << endl;
    }
    return 0;
}