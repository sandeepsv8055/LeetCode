class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 

        // Check if the missing number is in the middle
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i; // Return the first index where nums[i] != i
            }
        }

        // If all numbers are present, the missing number is 'n'
        return n;
    }
};
