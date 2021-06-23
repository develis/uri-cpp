#include <iostream>
using namespace std;

int main(){
    int N, u;
    cin >> N;
    for (u = 1; u <= N; u++)
    {
        cout << u << " " << u * u << " " << u * u * u << endl;
    }
    return 0;
}