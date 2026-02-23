#include <iostream>

using namespace std;

int main() {
    int terms;
    cout << "How many Fibonacci terms? ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Enter a positive value.\n";
        return 0;
    }

    long long a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= terms; i++) {
        cout << a << (i == terms ? '\n' : ' ');
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
