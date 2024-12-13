class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> hash;
    int maxlen = 0, start = 0;

    for (int i = 0; i < s.size(); i++) {
        if (hash.find(s[i]) != hash.end() && hash[s[i]] >= start) {
            start = hash[s[i]] + 1; // Move start to the right of the repeated character
        }
        hash[s[i]] = i; // Update the character's position
        maxlen = max(maxlen, i - start + 1); // Calculate the maximum length
    }

    return maxlen;
    }
};