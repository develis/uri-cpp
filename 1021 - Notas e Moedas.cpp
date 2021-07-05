#include <iostream>

using namespace std;

int main()
{
    double N;
    long long aux, nota, N100, N50, N20, N10, N5, N2, M1, M50, M25, M10, M05, M01;
    cin >> N;
    nota = N;
    aux = N*100;
    N100 = nota / 100;
    N50 = (nota % 100) / 50;
    N20 = ((nota % 100) % 50) / 20;
    N10 = (((nota % 100) % 50) % 20) / 10;
    N5 = (((nota % 100) % 50) % (20) % 10) / 5;
    N2 = (((((nota % 100) % 50) % 20) % 10) % 5) / 2;
    M1 = ((((((nota % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    aux = aux%100;
    M50 = aux/50;
    aux = aux%50;
    M25 = aux/25;
    aux = aux%25;
    M10 = aux/10;
    aux = aux%10;
    M05 = aux/5;
    aux = aux%5;
    M01 = aux/1;
    cout << "NOTAS:" << endl;
    cout << N100 << " nota(s) de R$ 100.00" << endl;
    cout << N50 << " nota(s) de R$ 50.00" << endl;
    cout << N20 << " nota(s) de R$ 20.00" << endl;
    cout << N10 << " nota(s) de R$ 10.00" << endl;
    cout << N5 << " nota(s) de R$ 5.00" << endl;
    cout << N2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << M1 << " moeda(s) de R$ 1.00" << endl;
    cout << M50 << " moeda(s) de R$ 0.50" << endl;
    cout << M25 << " moeda(s) de R$ 0.25" << endl;
    cout << M10 << " moeda(s) de R$ 0.10" << endl;
    cout << M05 << " moeda(s) de R$ 0.05" << endl;
    cout << M01 << " moeda(s) de R$ 0.01" << endl;

}