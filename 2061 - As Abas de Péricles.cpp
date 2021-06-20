#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    string act;
    cin >> N >> M;
    for (int u = 0;u < M;u++){
        cin >> act;
        if (act == "fechou"){
            N++;
        }  else N--;
    }
    cout << N << endl;
    return 0;
}