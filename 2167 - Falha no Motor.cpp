#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int vetor[n], indice;

    for (int i = 1; i <= n; i++)
    {
        cin >> vetor[i];
    }
    int atual = vetor[1];

    for (int i = 1; i <= n; i++)
    {
        if (vetor[i] >= atual)
        {
            atual = vetor[i];
            if (i == n)
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << i << endl;
            break;
        }
    }
}