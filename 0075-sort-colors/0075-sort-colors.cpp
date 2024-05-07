class Solution {
public:
    void sortColors(vector<int>& nums) {
        //two pass
        // int z =0,o=0,t=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1) o++;
        //     else if(nums[i]==2) t++;
        //     else z++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(i<z) nums[i] =0;
        //     else if(i>=z && i<o+z) nums[i]=1; 
        //     else nums[i]=2;
        // }
        
        //one pass solution
        //Dutch flag algorith 3 pointer
        int low =0;
        int mid =0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==2){
                int temp =nums[mid];
                nums[mid]=nums[high];
                nums[high] =temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low]= temp;
                low++;
                mid++;
            }
            else mid++;
        }
    }
};