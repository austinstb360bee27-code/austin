#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // Map closing brackets to their corresponding opening brackets
        unordered_map<char, char> mapping = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            // If it's a closing bracket
            if (mapping.count(c)) {
                // Stack must not be empty and top must match the opening pair
                if (st.empty() || st.top() != mapping[c]) {
                    return false;
                }
                st.pop();
            } else {
                // It's an opening bracket, push to stack
                st.push(c);
            }
        }

        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};
