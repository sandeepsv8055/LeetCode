class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);

        for(int i=0;i<n;i++){
            v[i]=0;
            for(int j =0;j<=i;j++){
                v[i] += nums[j];
            }
        }
        return v;




















        // int n = nums.size();
        // vector<int>runningSum(n);
        // for(int i =0;i<n;i++){
        //     runningSum[i] = 0;
        //     for(int j=0;j<=i;j++){
        //         runningSum[i] += nums[j];
        //     }
        // }
        // return runningSum;
    }
};