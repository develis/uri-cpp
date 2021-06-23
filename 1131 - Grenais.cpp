#include <iostream>
using namespace std;

int main(){
    int gG, gI, vG, vI, e, gT, comando;
    vI = 0;
    vG = 0;
    e = 0;
    gT = 0;

    while (comando != 2)
    {
        cin >> gI >> gG;
        if (gI > gG)
        {
            vI++;
        }
        if (gI < gG)
        {
            vG++;
        }
        if (gI == gG)
        {
            e++;
        }
        gT++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> comando;
    }

    cout << gT << " grenais" << endl;
    cout << "Inter:" << vI << endl;
    cout << "Gremio:" << vG << endl;
    cout << "Empates:" << e << endl;

    if (vI > vG)
    {
        cout << "Inter venceu mais" << endl;
    }
    if (vI < vG)
    {
        cout << "Gremio venceu mais" << endl;
    }
    if (vI == vG)
    {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}