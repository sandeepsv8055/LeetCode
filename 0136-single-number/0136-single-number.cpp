class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //approach 1 XOR ^
        int ans =nums[0];
    for(int i=1;i<nums.size();i++){
            ans^=nums[i]; // XOR each number
        }
        int a=2^2;
        cout<<a<<endl;
        return ans;

    // approach 2
    // map<int,int>mp;
    // for(int i=0;i<nums.size();i++){
    //     mp[nums[i]]++;
    // }
    // for(int i=0;i<nums.size();i++){
    //     if(mp[nums[i]]>1) continue;
    //     else return  nums[i];
    // }
    // return nums[0];
      }
};


    //approach 3 sort
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());  // Step 1: Sort the array

//         // Step 2: Traverse the array in steps of 2
//         for (int i = 0; i < nums.size(); i += 2) {
//             // If the current element doesn't have a matching next element, it's the single number
//             if (i == nums.size() - 1 || nums[i] != nums[i + 1]) {
//                 return nums[i];
//             }
//         }
        
//         return -1; // Just for safety, though we expect a valid result always
//     }
// };







// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         // Brute force approach
//         for (int i = 0; i < nums.size(); i++) {
//             int count = 0; // Reset count for each new element
            
//             // Check how many times nums[i] appears in the array
//             for (int j = 0; j < nums.size(); j++) {
//                 if (nums[i] == nums[j]) {
//                     count++;
//                 }
//             }
            
//             // If count is 1, we found the single number
//             if (count == 1) {
//                 return nums[i];
//             }
//         }
//     }
// };
