#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int menor = x[0], pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (menor > x[i])
        {
            menor = x[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
}