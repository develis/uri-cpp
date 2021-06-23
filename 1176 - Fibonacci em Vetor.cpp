#include <iostream>
using namespace std;

int main() {
long long F[61];
int u, t, anterior, N, tc;
F[0]=0;
F[1]=1;
F[2]=1;
cin >> N;
for (u = 2; u < 61; u++){ //contador fibonacci
F[u] = F[u-1] + F[u-2];
}
for (t = 0; t < N; t++){ //contador de cout
    cin >> tc;
    cout << "Fib(" << tc << ") = " << F[tc] << endl;
}
    return 0;
}