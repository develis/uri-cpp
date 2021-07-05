#include <iostream>
using namespace std;

int main() {
    int hi, mi, hf, mf, t = 0, MI, MF;
    cin >> hi >> mi >> hf >> mf;
    MI = (hi*60) + mi;
    MF = (hf*60) + mf;
    if (MF <= MI) MF += 1440;
    cout << "O JOGO DUROU " << (MF-MI)/60 << " HORA(S) E " << (MF-MI)%60 << " MINUTO(S)" << endl;
    return 0;
}