class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int x = arr[0] + arr[n-1];
        vector<int>ans;
        for(int i=0;i<n/2;i++){
            int y = arr[i] + arr[n-i-1];
            if(x!=y){
                return -1;
            }
            else 
                 ans.push_back(arr[i] * arr[n-i-1]);
        }
        long long sum =0;
        for(int i=0;i<ans.size();i++){
            sum += ans[i];
        }
        return sum;
    }
};











        // int n= arr.size();
        // sort(arr.begin(),arr.end());
        // vector<int>ans;
        // int x = arr[0]+arr[n-1];
        // int i=0;
        // while(i<n/2){
        //     int x1 = arr[i]+arr[n-i-1];
        //     if(x1!=x)
        //     {
        //         return -1;
        //     }
        //     else {
        //        ans.push_back(arr[i]*arr[n-i-1]) ;
        //     }
        //     i++;
        // }
        // int sum=0;
        // for(int i=0;i<ans.size();i++){
        //      sum +=ans[i];
        // }
        // return sum;
   // }
//};