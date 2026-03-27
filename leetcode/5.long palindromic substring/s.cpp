#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            // Check for odd-length palindromes (center is a single character)
            int len1 = expandAroundCenter(s, i, i);
            // Check for even-length palindromes (center is between two characters)
            int len2 = expandAroundCenter(s, i, i + 1);
            
            int currentLen = max(len1, len2);
            if (currentLen > maxLength) {
                maxLength = currentLen;
                // Calculate the new start index of the longest palindrome
                start = i - (currentLen - 1) / 2;
            }
        }
        return s.substr(start, maxLength);
    }

private:
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // The length is right - left - 1 because the loop ends 
        // when s[left] != s[right]
        return right - left - 1;
    }
};
