#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int u = 0; u < N*4; u+=4){
        cout << (u+1) << " " << (u+2) << " " << (u+3) << " PUM" << endl;
    }
    return 0;
}