#include <iostream>
using namespace std;

int main() {
    int B, G;
    cin >> B;
    cin >> G;
    if (G/2 <= B){
        cout << "Amelia tem todas bolinhas!" << endl;
    } else cout << "Faltam " << G/2 - B << " bolinha(s)" << endl;
    return 0;
}