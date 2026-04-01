#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Array of words where index 1 = "one", 2 = "two", etc.
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        cout << words[n] << endl;
    } else if (n > 9) {
        cout << "Greater than 9" << endl;
    }

    return 0;
}

