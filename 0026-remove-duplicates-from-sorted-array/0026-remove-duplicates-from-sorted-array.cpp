class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
// //      set
//         set<int>st;
//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);
//         }
//         int index =0;
//         for(auto it: st){
//             nums[index] = it;
//             index++;
//         }
//         return index;


        //two pointer
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;














        // int i=0;
        // for(int j =i+1;j<n;j++){
        //     if(nums[i]!=nums[j]){
        //         i++;
        //         nums[i]=nums[j];
        //     }
        // }
        // return i+1;

        // map<int, int> mp;
        // for (int num : nums) {
        //     mp[num]++;
        // }

        // // Overwrite the front of nums with unique elements
        // int i = 0;
        // for (auto& p : mp) {
        //     nums[i++] = p.first;
        // }

        // return mp.size();
    }
};