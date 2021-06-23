#include <iostream>
#include <string>
using namespace std;

int main() {
    int u, pos;
    double N;
    pos = 0;
    for (u = 0; u < 6; u++){
        cin >> N;
        if (N > 0){
            pos = pos + 1; 
        }
    }
    cout << pos << " valores positivos" << endl;
return 0;
}