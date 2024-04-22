class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z =0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) o++;
            else if(nums[i]==2) t++;
            else z++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<z) nums[i] =0;
            else if(i>=z && i<o+z) nums[i]=1; 
            else nums[i]=2;
        }
    }
};