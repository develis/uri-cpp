#include <iostream>
using namespace std;

int main() {
int M, N, u, som;
som = 0;
while (M >= 0 && N >= 0){
    cin >> M >> N;
    if (N <= 0 || M <= 0){
        break;
    }
    if (M > N){
        som = 0;
        for (u = N; u <= M; u++){
            cout <<u << " ";
            som = som + u;
        }
    }
    if (N > M){
        som = 0;
        for (u = M; u <= N; u++){
            cout <<u << " ";
            som = som + u;
        }
    }
    cout << "Sum=" << som << endl;
}
    return 0;
}