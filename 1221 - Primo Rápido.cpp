#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int aux, num, div = 0, N;
    cin >> N;
    for (int u = 0; u < N; u++){
        cin >> num;
        for (aux = 2; aux <= sqrt(num); aux++){
            if (num % aux == 0)
                div++;
        }
        if (div == 0) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
        div = 0;
    }
    return 0;
}
