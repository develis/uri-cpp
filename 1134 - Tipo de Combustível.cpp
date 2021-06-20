#include <iostream>
using namespace std;

int main() {
    int cod, a = 0, g = 0, d = 0;
    while (true){
        cin >> cod;
        if (cod == 1) a++;
        if (cod == 2) g++;
        if (cod == 3) d++;
        if (cod == 4) break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    return 0;
}