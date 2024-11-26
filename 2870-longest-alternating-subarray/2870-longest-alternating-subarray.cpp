class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return -1;
        int maxlen = -1;
        int currlen = 1;
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1] == 1 && currlen%2 == 1)||
             (nums[i]-nums[i-1] == -1 && currlen%2 == 0)) {
                currlen++;
             }
             else {
                if (nums[i] - nums[i - 1] == 1) {
                     currlen = 2;
                } else {
                currlen = 1; 
                }
             }

             if(currlen>1){
                maxlen = max(maxlen,currlen);
             }
        }
        if(maxlen>1){
            return maxlen;
        }
        else return -1;
        
    }
};