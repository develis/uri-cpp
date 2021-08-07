#include <iostream>
using namespace std;

int main() {
    int X, u = 0;
    cin >> X;
    while(true){
        if (X%2 != 0){
            cout << X << endl;
            u++;
        }
        X++;
        if (u == 6) break;
    }
    
    return 0;
}