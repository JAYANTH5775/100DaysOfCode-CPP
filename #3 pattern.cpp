#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n for star pattern: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.\n";
        return 0;
    }

    // Increasing part
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    // Decreasing part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
