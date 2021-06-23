#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string r = "Ho";
    cin >> N;
    for (int u = 1;u <= N; u++){
        if (u == N){
            cout << r << "!" << endl;
        } else cout << r << " ";
    }
    return 0;
}