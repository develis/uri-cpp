#include <iostream>
using namespace std;

int main() {
    int N, d = 0;
    float C;
    cin >> N;
    for (int u = 0; u < N; u++){
        cin >> C;
        while (C > 1){
            C /= 2;
            d++;
        }
        cout << d << " dias" << endl;
        d = 0;
    }
    return 0;
}