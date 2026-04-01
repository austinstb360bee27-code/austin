#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the strings alphabetically
        // The common prefix of the entire array must be 
        // common between the first and last strings.
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();
        string result = "";

        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] != last[i]) {
                break;
            }
            result += first[i];
        }

        return result;
    }
};
