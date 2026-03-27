#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // charIndex stores the last seen position + 1 of each character
        // Using 128 to cover all standard ASCII characters
        vector<int> charIndex(128, 0);
        int maxLength = 0;
        int left = 0; // Left boundary of the sliding window

        for (int right = 0; right < s.length(); right++) {
            // If the character was seen before, move the left pointer
            // to the right of the previous occurrence
            left = max(left, charIndex[s[right]]);
            
            // Calculate current window length and update max
            maxLength = max(maxLength, right - left + 1);
            
            // Store the next index for this character
            charIndex[s[right]] = right + 1;
        }

        return maxLength;
    }
};
