#include <iostream>
using namespace std;

int main(){
    int ini, fin;
    cin >> ini >> fin;

    if (ini >= fin)
    {
        cout << "O JOGO DUROU " << (24 - ini) + fin << " HORA(S)" << endl;
    }
    else
    {
        cout << "O JOGO DUROU " << fin - ini << " HORA(S)" << endl;
    }

    return 0;
}