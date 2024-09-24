class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int k = nums.size();
        for(int j=1;j<k;j++){
            if(nums[j]!=nums[i])
            i++;
            nums[i]=nums[j];
        }
        return i+1;
    }
};