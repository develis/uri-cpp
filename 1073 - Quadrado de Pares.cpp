#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int u = 1; u <= N; u++){
        if (u%2 == 0){
            cout << u << "^2 = " << u*u << endl;
        }
    }
    return 0;
}