#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int a, N, i, sum, u;
    sum = 0;
    cin >> a >> N;
    while (N <= 0){
        cin >> N;
    }
    for (u = 0; u < N; u++){
        sum = sum + a + u;
    }
    cout << sum << endl;
    return 0;
}