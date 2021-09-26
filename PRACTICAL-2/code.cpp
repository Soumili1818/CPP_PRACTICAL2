#include <iostream>
using namespace std;

int main() {
    int i, n;
    bool Prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0 || n == 1) {
        Prime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                Prime = false;
                break;
            }
        }
    }
    if (Prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
