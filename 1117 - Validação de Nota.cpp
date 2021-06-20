#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c = 0;
    double n, aux = 0;
    while (true){
        cin >> n;
        if (n < 0 || n > 10){
            cout << "nota invalida" << endl;
    } else {
        c++;
        aux += n;
    }
    if (c == 2){
        cout << fixed << setprecision(2) << "media = " << aux/2.0 <<endl;
        break;
    }
    }
    return 0;
}