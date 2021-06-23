#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, d, e, f, x, soma = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if (a > 0){
        x++;
        soma = soma + a;
    }
    if (b > 0){
        x++;
        soma = soma + b;
    }
    if (c > 0){
        x++;
        soma = soma + c;
    }
    if (d > 0){
        x++;
        soma = soma + d;
    }
    if (e > 0){
        x++;
        soma = soma + e;
    }
    if (f > 0){
        x++;
        soma = soma + f;
    }
    cout << x << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma/x << endl;




    return 0;
}