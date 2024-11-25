class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //optimal
        
        int n = nums.size();
        int ans;
        int prefix =1, suffix =1;
        for(int i =0;i<n;i++){
            if(prefix==0) prefix =1;
            if(suffix ==0) suffix =1;
            prefix *= nums[i];
            suffix *= nums[n-i-1];
             ans = max(ans,max(prefix,suffix));
        }
        return ans;




        //better O(n^2)
        // int maxi = INT_MIN;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int Product =1;
        //     for(int j =i; j<n; j++){
        //         Product *= nums[j];
        //         maxi = max(maxi, Product);   
        //     }
        // }
        // return maxi;



        //brute force O(n^3)
        // int maxi = INT_MIN;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j =i; j<n; j++){
        //         int Product =1;
        //         for(int k=i;k<=j;k++){
        //             Product *= nums[k];
        //         }
        //         maxi = max(maxi, Product);   
        //     }
        // }
        // return maxi;
    }
};