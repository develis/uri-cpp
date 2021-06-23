#include <iostream>
using namespace std;

int main() {
int x[10], u;
for (u = 0; u < 10; u++){
	cin >> x[u];
    if (x[u] <= 0){
    x[u] = 1;
}
}
for (u = 0; u < 10; u++){
    cout << "X" << "[" << u << "] " << "= " << x[u] << endl;
}

    return 0;
}