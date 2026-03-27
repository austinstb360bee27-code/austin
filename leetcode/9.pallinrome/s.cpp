class Solution {
public:
    bool isPalindrome(int x) {
        // Special cases:
        // 1. Negative numbers are not palindromes (e.g., -121 != 121-)
        // 2. If the last digit is 0, the first digit must be 0 (only possible for 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // When the length is odd, we can get rid of the middle digit by reversedHalf/10
        // For example, if x = 121, at the end of the loop: x = 1, reversedHalf = 12
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
