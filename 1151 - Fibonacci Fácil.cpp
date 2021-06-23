#include <iostream>
using namespace std;

int main()
{
    int F[46], u, N;
    cin >> N;
    F[0] = 0;
    F[1] = 1;
    for (u = 0; u < N; u++)
    { //contador fibonacci
        F[u] = F[u - 1] + F[u - 2];
        if (u == 0)
        {
            F[u] = 0;
        }
        if (u == 1)
        {
            F[u] = 1;
        }
        if (u == (N - 1))
        {
            cout << F[u];
        }
        else
            cout << F[u] << " ";
    }
    cout << endl;

    return 0;
}