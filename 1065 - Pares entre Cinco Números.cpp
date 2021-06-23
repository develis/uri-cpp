#include <iostream>
using namespace std;

int main() {
    int u, N, pares;
    pares = 0;
    for (u = 1; u <= 5; u++){
        cin >> N;
        if (N%2 == 0){
            pares = pares + 1;
        }
    }
    cout << pares << " valores pares" << endl;
return 0;
}