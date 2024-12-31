class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum =0, min_preSum =0;
        for(int n: nums){
            sum += n;
            min_preSum = min(min_preSum, sum);
        }
        return 1-min_preSum;
    }

};