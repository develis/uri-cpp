#include <iostream>
using namespace std;

int main() {
    int x;
    while(true){
        cin >> x;
        for (int j = 1; j < x; j++){
            cout << j << " ";
        }
        if(x != 0){
            cout << x << endl;
        }
        if (x == 0){
            break;
        }
    }
    return 0;
}