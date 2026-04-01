#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    // Read the number of arrays and the number of queries
    cin >> n >> q;

    // Create a vector of vectors to store the variable-length arrays
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Read the size of the current array
        a[i].resize(k); // Resize the inner vector to hold k elements
        
        for (int j = 0; j < k; j++) {
            cin >> a[i][j]; // Fill the inner vector
        }
    }

    // Process each query
    for (int count = 0; count < q; count++) {
        int i, j;
        cin >> i >> j;
        // Output the element at array i, index j
        cout << a[i][j] << endl;
    }

    return 0;
}
