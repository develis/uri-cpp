#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int p, cod, qtd;
    double l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0;
    cin >> p;
    for (int u = 0;u < p;u++){
        cin >> cod >> qtd;
        if (cod == 1001) l1 = qtd * 1.5;
        if (cod == 1002) l2 = qtd*2.5;
        if (cod == 1003) l3 = qtd*3.5;
        if (cod == 1004) l4 = qtd*4.5;
        if (cod == 1005) l5 = qtd*5.5;
    }
    cout << fixed << setprecision(2) << l1+l2+l3+l4+l5 << endl;
    return 0;
}