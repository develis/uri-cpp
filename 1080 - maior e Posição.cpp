#include <iostream>
using namespace std;

int main() {
    int N, u, pos, maior;
    for (u=1; u <= 100; u++){
        cin >> N;
        if (N > maior){
            maior = N;
            pos = u;
        }
    }
        cout << maior << endl;
        cout << pos << endl;
        
    return 0;
}