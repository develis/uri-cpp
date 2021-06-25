#include <iostream>
using namespace std;

int main() {
    int M, A, B, C;
    cin >> M;
    cin >> A;
    cin >> B;
    C = M - A - B;
    if (C > A && C > B){
        cout << C << endl;
    } else if(A > B) {
        cout << A << endl;
    } else cout << B << endl;
    return 0;
}