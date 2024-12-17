/*
class Solution {
public:
vector<int> searchRange(vector<int>& nums, int target) {
int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
if (l==nums.size()||nums[l]!=target)
{
return{-1,-1};
}
int r=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
return {l,r};
}

};
*/
class Solution {                       //Linear Search
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int left = -1, right = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                left = i;
                break;
            }
        }

        if (left == -1) {
            return {-1, -1};
        }

        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] == target) {
                right= i;
                break;
       
            }
        }

        return {left, right};
    }
};