#include <iostream>
#include <string>
using namespace std;

int main() {
    int C, f;
    string nome;
    cin >> C;
    for (int u = 0; u < C; u++){
        cin >> nome >> f;
        if (nome != "Thor"){
            cout << "N" << endl;
        } if (nome == "Thor"){
            cout << "Y" << endl;
        }
    }
    return 0;
}