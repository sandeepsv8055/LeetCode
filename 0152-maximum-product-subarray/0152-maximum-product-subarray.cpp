class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //better O(n^2)
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int Product =1;
            for(int j =i; j<n; j++){
                Product *= nums[j];
                maxi = max(maxi, Product);   
            }
        }
        return maxi;



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