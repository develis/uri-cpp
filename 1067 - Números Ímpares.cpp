#include <iostream>
using namespace std;

int main() {
    int u, X;
    cin >> X;
    for (u = 1; u <= X; u++){
        if (u%2 != 0){
            cout << u << endl;
        }
    }
return 0;
}