#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    // Read the number of integers
    if (!(cin >> n)) return 0;

    // Use a vector to store 'n' integers
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print integers in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        // Add a space between numbers, but not after the last one
        if (i > 0) {
            cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}

