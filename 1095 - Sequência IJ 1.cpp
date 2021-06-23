#include <iostream>
using namespace std;

int main() {
    int I, J;
    I = 1;
    for (J = 60; J >= 0; J--){
        cout << "I=" << I << " " << "J=" << J << endl;
        I = I + 3;
        J = J - 4;
    }
    return 0;
}