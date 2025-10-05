class Solution {
public:
    void reverseString(vector<char>& s) {
        //usiing stl
        //reverse(s.begin(),s.end());

        //using stack
        stack<char>st;
        for(char c:s){
            st.push(c);
        }
        for(int i=0;i<s.size();i++){
            s[i] = st.top();
            st.pop();
        }






        //2 pointer
        // int left =0, right = s.size()-1;
        // while(left<right){
        //     swap(s[left],s[right]);
        //     left++;
        //     right--;
        // }
    }
};