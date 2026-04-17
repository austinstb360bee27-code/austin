#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    void backtrack(std::vector<std::string>& result, std::string current, int open, int close, int n) {
        // Base case: If the string is full length (n * 2), we found a valid combination
        if (current.length() == n * 2) {
            result.push_back(current);
            return;
        }

        // Rule 1: Can we add an opening parenthesis?
        if (open < n) {
            backtrack(result, current + "(", open + 1, close, n);
        }

        // Rule 2: Can we add a closing parenthesis? 
        // (Only if there's an open one to close)
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, n);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};
