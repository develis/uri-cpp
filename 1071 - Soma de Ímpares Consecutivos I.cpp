#include <iostream>
using namespace std;

int main(){
    int X, Y, impares, u, ub;
    impares = 0;
    cin >> X;
    cin >> Y;

    if (X < Y)
    {
        for (u = X + 1; u < Y; u++)
        {
            if (u % 2 != 0)
            {
                impares = impares + u;
            }
        }
    }
    else
    {
        for (ub = Y + 1; ub < X; ub++)
        {
            if (ub % 2 != 0)
            {
                impares = impares + ub;
            }
        }
    }
    cout << impares << endl;
    return 0;
}