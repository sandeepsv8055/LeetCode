class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> hash;
    int maxlen = 0, start = 0;

    for (int i = 0; i < s.size(); i++) {
        if (hash.find(s[i]) != hash.end() && hash[s[i]] >= start) {
            start = hash[s[i]] + 1; 
        }
        hash[s[i]] = i; 
        maxlen = max(maxlen, i - start + 1); 
    }

    return maxlen;
    }
};