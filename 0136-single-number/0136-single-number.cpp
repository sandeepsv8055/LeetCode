// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
        //approach 1 XOR ^
    //     int ans =nums[0];
    // for(int i=1;i<nums.size();i++){
    //         ans^=nums[i]; // XOR each number
    //     }
    //     int a=2^2;
    //     cout<<a<<endl;
    //     return ans;

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
    
    //approach 3 sort
    // sort(nums.begin(),nums.end());
    // int cnt=0;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==nums[i+1]) cnt++;
    //     if(cnt ==1)
    // }


//}
//};




class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Brute force approach
        for (int i = 0; i < nums.size(); i++) {
            int count = 0; // Reset count for each new element
            
            // Check how many times nums[i] appears in the array
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            
            // If count is 1, we found the single number
            if (count == 1) {
                return nums[i];
            }
        }

        // Return -1 if no single number is found (just for safety, should never reach here)
        return -1;
    }
};
