#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int u = 1; u < 10000; u++){
        if(u%N == 2) cout << u << endl;
    }
    return 0;
}