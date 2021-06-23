#include <iostream>
using namespace std;

int main() {
    int X, Y;
    while (X != Y){
        cin >> X >> Y;
        if (X > Y) cout << "Decrescente" << endl;
        if (Y > X) cout << "Crescente" << endl;
    }
    return 0;
}