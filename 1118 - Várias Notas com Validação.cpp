#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float na, nb, med;
    int cmd, u;
    u = 0;
    while (cmd != 2)
    {
        do
        {
            cin >> na;
            if (na < 0 || na > 10)
            {
                cout << "nota invalida" << endl;
            }
            if (na >= 0 && na <= 10)
            {
                u++;
            }
        } while (na < 0 || na > 10);

        cin >> nb;
        if (nb >= 0 && nb <= 10)
        {
            u++;
        }
        while (nb < 0 || nb > 10)
        {
            cout << "nota invalida" << endl;
            cin >> nb;
            if (nb >= 0 && nb <= 10)
            {
                u++;
            }
        }

        if (u == 2)
        {
            med = (na + nb) / 2;
            cout << fixed << setprecision(2) << "media = " << med << endl;
            na = 0;
            nb = 0;
            med = 0;
            u = 0;
            do
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> cmd;
                if (cmd == 2)
                {
                    break;
                }

            } while (cmd < 1 || cmd > 2);
        }
    }
}