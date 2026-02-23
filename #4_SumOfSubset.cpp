#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 3, 6, 12, 13, 1};
    int target = 18;

    bool possible = false;

    int n = static_cast<int>(arr.size());
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        cout << "Subset: { ";

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
                cout << arr[i] << ' ';
            }
        }

        cout << "} -> Sum = " << sum << '\n';

        if (sum == target) {
            possible = true;
        }
    }

    if (possible) {
        cout << "Target sum " << target << " is possible.\n";
    } else {
        cout << "Target sum " << target << " is not possible.\n";
    }

    return 0;
}
