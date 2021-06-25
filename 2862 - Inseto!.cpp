#include <iostream>
using namespace std;

int main() {
    int C, N;
    cin >> C;
    for (int u = 0; u < C; u++){
        cin >> N;
        if (N <= 8000) cout << "Inseto!" << endl;
        else cout << "Mais de 8000!" << endl;
    }
    return 0;
}