#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int N, X, u;
cin >> N;

for (u = 1; u <= N;u++){
    cin >> X;
    if (X != 0){
        if (X%2 == 0) cout << "EVEN ";
        else cout << "ODD ";
        if (X > 0) cout << "POSITIVE" << endl;
        if (X < 0) cout << "NEGATIVE" << endl;
    }
    else cout << "NULL" << endl;
}
return 0;
}