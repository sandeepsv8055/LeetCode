class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>idx;
        int n = mountain.size();

        for(int i=1;i<mountain.size()-1;i++){
            if(mountain[i]>mountain[i-1] &&  mountain[i]>mountain[i+1]  ){
                idx.push_back(i);
            }
        }
        return idx;
    }
    
};