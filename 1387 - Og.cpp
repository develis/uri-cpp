#include <iostream>
using namespace std;

int main() {
    int L, R;
    while (true){
        cin >> L >> R;
        if (L > 0 || R > 0){
            cout << L+R << endl;
        } else break;
    }
    return 0;
}