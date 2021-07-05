#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int d, h, m, s, df, hf, mf, sf, sT, sI, sF, DIA, SEGUNDO, HORA, MINUTO;
    cin >> x >> d;
    cin >> h >> x >> m >> x>> s;
    cin >> x >> df;
    cin >> hf >> x >> mf >> x >> sf;
    sI = s + (m*60) + (h*60*60) + (d*24*60*60);
    sF = sf + (mf*60) + (hf*60*60) + (df*24*60*60);
    sT = sF - sI;

    DIA = sT/(24*60*60);
    sT = sT - DIA*24*60*60;
    HORA = sT/(60*60);
    sT = sT - HORA*60*60;
    MINUTO =  sT/60;
    SEGUNDO = sT - MINUTO*60;

    cout << DIA << " dia(s)" <<endl;
    cout << HORA << " hora(s)" <<endl;
    cout << MINUTO << " minuto(s)" <<endl;
    cout << SEGUNDO << " segundo(s)" <<endl;
    
    return 0;
}