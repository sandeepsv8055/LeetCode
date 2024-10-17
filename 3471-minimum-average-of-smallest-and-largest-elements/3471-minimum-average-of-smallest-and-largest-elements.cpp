class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<double>avg;
        for(int i = 0; i<n/2; i++ ){
            double avgs = (nums[i]+nums[n-i-1])/2.0;
            avg.push_back(avgs);
        }
         sort(avg.begin(),avg.end());
         return avg[0];
    }
};