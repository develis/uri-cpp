#include <iostream>
using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main()
{
    int num1, num2, N;
    cin >> N;
    for (int u = 0; u < N; u++){
        cin>> num1 >> num2;
        cout<< mdc(num1, num2)<<endl;
    }
}