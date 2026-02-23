#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return 0;
    }

    unsigned long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is " << factorial << '\n';
    return 0;
}
