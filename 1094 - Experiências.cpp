#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, a, cobt = 0, c = 0, r = 0, s = 0;
    char t;
    cin >> N;
    for (int u = 0;u < N;u++){
        cin >> a >> t;
        cobt += a;
        if (t == 'C'){
            c += a;
        }
        if (t == 'R'){
            r += a;
        }
        if (t == 'S'){
            s += a;
        }
    }
    cout << "Total: " << cobt << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << c*100.0/cobt << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << r*100.0/cobt << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << s*100.0/cobt << " %" << endl;
    return 0;
}