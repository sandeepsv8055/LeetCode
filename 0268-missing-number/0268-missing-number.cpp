class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //xor
        int n = nums.size();
        int x = n;   // include n

        for (int i = 0; i < n; i++) {
            x ^= i;
            x ^= nums[i];
        }

        return x;


        //sum
        // int n = nums.size();
        // int totalSum = n*(n+1)/2;
        // int actualSum =0;
        // for(int x: nums){
        //     actualSum += x;
        // }
        // return (totalSum - actualSum);





        //hash
        // int n = nums.size();
        // vector<int>hash(n+1,0);
        // for(int i=0;i<n;i++){
        //     hash[nums[i]] =1;
        // }
        // for(int i=1;i<n;i++){
        //     if(hash[i]==0) return i;
        // }
        // return n;



        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int flag =0;
        //     for(int j =0;j<n;j++){
        //         if(nums[j]== i){
        //             flag =1;
        //             break;
        //         }
        //     }
        //     if(flag == 0) return i;
        // }
        // return n;
    }
};