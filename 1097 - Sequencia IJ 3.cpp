#include <iostream>

using namespace std;

int main() {
    int i = 1, j = 7, counter = 0;
    do {
        cout << "I=" << i << " "<< "J=" << j << endl;
        j--;
        counter++;
        if (counter == 3) {
            j += 5;
            counter = 0;
            i += 2;
        }
    } while (i < 10);
    return 0;
}