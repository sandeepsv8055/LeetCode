class Solution {
public:
    void reverseString(vector<char>& s) {
        // stl
        //reverse(s.begin(),s.end());


        //2 pointer
        int l =0, r = s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};