#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string x = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    cin >> N;
    for (int u = 0; u < N; u++){
        cout << x[u];
    }
    cout << endl;
    return 0;
}