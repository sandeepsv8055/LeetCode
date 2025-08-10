class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        //brute force
        // int n = temp.size();
        // vector<int>ans(n);
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(temp[j]>temp[i]){
        //             ans[i] = j-i;
        //             break;
        //         }
        //     }
        // }
        // return ans;


        int n = temp.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && temp[st.top()]< temp[i]){
                ans[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};