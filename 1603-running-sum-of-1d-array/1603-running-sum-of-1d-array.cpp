class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>run(n);
        run[0] = nums[0];
        for(int i =1;i<n;i++){
            run[i] = nums[i]+run[i-1];
        }
        return run;

     



















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