#include <iostream>
#include <string>

using namespace std;

string numberToWords(int num) {
    const string ones[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    const string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num < 0 || num > 100) {
        return "invalid entry";
    }
    if (num < 20) {
        return ones[num];
    }
    if (num == 100) {
        return "one hundred";
    }

    int tenPart = num / 10;
    int onePart = num % 10;

    if (onePart == 0) {
        return tens[tenPart];
    }
    return tens[tenPart] + " " + ones[onePart];
}

int main() {
    while (true) {
        int num;
        cout << "Enter a number from 0 to 100: ";
        cin >> num;

        cout << numberToWords(num) << '\n';

        char choice;
        cout << "Do you want to convert another number? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
