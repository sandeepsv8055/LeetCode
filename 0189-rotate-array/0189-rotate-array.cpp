class Solution {
public:
void reversePart(int i,int j ,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
    if(k>n) k = k%n;
    reversePart(0,n-k-1,nums);
    reversePart(n-k,n-1,nums);
    reversePart(0,n-1,nums);
    
    }
    
};