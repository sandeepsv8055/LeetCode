class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int ans =nums[0];
    // for(int i=1;i<nums.size();i++){
    //         ans^=nums[i];
    //     }
    //     int a=2^2;
    //     cout<<a<<endl;
    //     return ans;
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]>1) continue;
        else return  nums[i];
    }
    return nums[0];
    }
};