#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b;
    // Reading two integers separated by a newline
    cin >> a >> b;

    // Array for mapping numbers 1-9 to English words
    string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            // Print the word from the array
            cout << words[n] << endl;
        } else if (n > 9) {
            // Check if the number is even or odd
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
