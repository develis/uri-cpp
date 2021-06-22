#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double X, Y;
    cin >> N;
    for (int u = 0; u < N; u++){
        cin >> X >> Y;
        if(Y == 0){
            cout << "divisao impossivel" << endl;
        } else cout << fixed << setprecision(1) << X/Y << endl;
    }
    return 0;
}