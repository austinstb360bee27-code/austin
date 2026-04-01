#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

/**
 * Parses a comma-separated string into a vector of integers.
 * @param str The input string (e.g., "23,4,56")
 * @return A vector containing the parsed integers
 */
vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    string temp;

    // Extract segments separated by commas
    while (getline(ss, temp, ',')) {
        // Convert the string segment to an integer and store it
        result.push_back(stoi(temp));
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    
    vector<int> integers = parseInts(str);
    
    // Print each integer on a new line
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
