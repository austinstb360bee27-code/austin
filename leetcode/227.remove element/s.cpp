#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        // 'k' tracks the index for the next element that is NOT 'val'
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            // If the current element is not the one we want to remove
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move it to the 'k-th' position
                k++;               // Increment the count of valid elements
            }
        }

        return k;
    }
};
