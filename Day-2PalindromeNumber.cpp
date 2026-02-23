#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome number.\n";
    } else {
        cout << original << " is not a palindrome number.\n";
    }

    return 0;
}
