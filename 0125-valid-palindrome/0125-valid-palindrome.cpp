class Solution {
public:
    bool isPalindrome(string s) {
        // int i =0,j = s.length()-1;
        // while(i<=j){
        //     if(!isalnum(s[i])){
        //         i++;
        //         continue;
        //     }
        //     if(!isalnum(s[j])){
        //         j--;
        //         continue;
        //     }
        //     if(tolower(s[i])!=tolower(s[j])){
        //         return false; 
        //     }
        //     else{
        //          i++;
        //         j--;
        //     }
        // }
        // return true;

        string cleaned ="";
        for( char ch: s){
            if(isalnum(ch)){
                cleaned += tolower(ch);
            }
        }
        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());
        return cleaned == reversed;


    }
};