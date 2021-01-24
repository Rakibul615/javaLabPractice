
#include <iostream>
using namespace std;

int main() {
    int i, n, fibo1 = 0, fibo2 = 1, nextValue = 0;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for ( i = 1; i <= n; ++i) {

        if(i == 1) {
            cout << fibo1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << fibo2 << ", ";
            continue;
        }
        nextValue = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = nextValue;

        cout << nextValue << ", ";
    }
    return 0;
}
