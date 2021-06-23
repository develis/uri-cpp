#include <iostream>
using namespace std;

int main() {
int N, u;
cin >> N;
for (u=1; N > 1; N = N-1){
    u = u * N;
}
cout << u << endl;
    return 0;
}