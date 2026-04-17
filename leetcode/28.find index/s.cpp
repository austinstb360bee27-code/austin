#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int h = haystack.length();
        int n = needle.length();

        // 1. If needle is longer than haystack, it's impossible to find
        if (n > h) return -1;

        // 2. Loop through haystack (only as far as the needle can fit)
        for (int i = 0; i <= h - n; i++) {
            int j = 0;
            
            // 3. Check if characters match starting from index i
            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }

            // 4. If j reached the length of needle, we found a full match
            if (j == n) {
                return i;
            }
        }

        return -1;
    }
};
