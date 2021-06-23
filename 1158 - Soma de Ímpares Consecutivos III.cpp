#include <iostream>
#include <iostream>
using namespace std;

int main() {
int X, Y, i, N, j, k, soma;
soma = 0;
cin >> N;
for (i = 0; i < N; i++)
{
cin >> X >> Y;
    for (k = 0, j = X; k < Y; j++)
    {
    if (j % 2 != 0)
    {
        soma += j;
        k++;
    }
    }
cout << soma << endl;
    soma = 0;

}
return 0;
}