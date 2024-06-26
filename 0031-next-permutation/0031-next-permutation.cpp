class Solution {
public:
    // void reverse(vector<int>& nums, int i, int j){
    //     while(i<j){
    //         int temp= nums[i];
    //         nums[i] =nums[j];
    //         i++;
    //         j--;
    //     }
    //     return;
    // }
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
       //1)-->  //finfing pivot index
        int idx = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){ // if array is alredy grratest
            reverse(nums.begin(),nums.end());
            return;
        }
        //2)--> sorting/reverse after pivot
        reverse(nums.begin()+idx+1,nums.end());
        //3)-->Finding the just gretater elements than idx
        int j =-1;
        for(int i = idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
          }
        }
        
        //4)-->swaping idx[pivot] and j
        int temp = nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
    }
};