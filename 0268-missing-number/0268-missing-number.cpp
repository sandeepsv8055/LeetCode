// Approcah 1
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end()); 

//         for (int i = 0; i < n; i++) {
//             if (nums[i] != i) {
//                 return i; // Return the first index where nums[i] != i
//             }
//         }

//         // If all numbers are present, the missing number is 'n'
//         return n;
//     }
// };

//apporcah 2
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expectedSum = n*(n+1)/2;
//         int currentSum = 0;
//         for(int i=0; i<n;i++){
//             currentSum += nums[i];
//         }
//         return expectedSum - currentSum;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = n; // to inclde last index;
        for(int i=0;i<n;i++){
            x = x^i^nums[i];
        }
        return x;
    }
};
