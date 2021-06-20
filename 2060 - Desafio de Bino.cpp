#include <iostream>
using namespace std;

int main() {
    int n, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    cin >> n;
    int b[n];
    for (int u = 0; u < n; u++){
        cin >> b[u];
        if (b[u]%2 == 0) m2++;
        if (b[u]%3 == 0) m3++;
        if (b[u]%4 == 0) m4++;
        if (b[u]%5 == 0) m5++;
    }
    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;
    return 0;
}