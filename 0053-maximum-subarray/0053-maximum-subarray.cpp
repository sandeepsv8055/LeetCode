class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //optimal O(n) 
        int n = nums.size();
        int maxSum = INT_MIN;
        int sum =0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum>maxSum) maxSum = sum;
            if(sum<0) sum =0;
        }
        return maxSum;

        //brute force O(n^3)
        // int maxSum = INT_MIN;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j =i; j<n; j++){
        //         int sum =0;
        //         for(int k=i;k<=j;k++){
        //             sum += nums[k];
        //         }
        //         maxSum = max(maxSum, sum);   
        //     }
        // }
        // return maxSum;

        //2 . better O(n^2)
        
        // int n = nums.size();
        // int maxSum = INT_MIN;
        // for(int i=0;i<n;i++){
        //     int sum =0;
        //     for(int j =i; j<n; j++){
        //           sum += nums[j];
        //           maxSum = max(maxSum, sum);   
        //     }
        // }
        // return maxSum;

    }
};