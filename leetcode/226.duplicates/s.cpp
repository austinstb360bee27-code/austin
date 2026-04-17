#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // If the array is empty, there are 0 unique elements
        if (nums.empty()) return 0;

        // 'i' is the index where the next unique element will be placed
        int i = 0;

        // 'j' scans through the array starting from the second element
        for (int j = 1; j < nums.size(); j++) {
            // If we find a value that is different from the last unique one
            if (nums[j] != nums[i]) {
                i++;             // Move the unique pointer forward
                nums[i] = nums[j]; // Update the position with the new unique value
            }
        }

        // The number of unique elements is the index + 1
        return i + 1;
    }
};
