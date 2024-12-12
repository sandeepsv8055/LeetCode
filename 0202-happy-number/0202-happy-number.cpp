class Solution {
public:
    bool isHappy(int n) {
    unordered_map<int,int>v;
        int sum=0;
        
    while(sum!=1)
    {
        sum=0;
        while(n>0)
        {
            sum+=pow((n%10),2);
            n=n/10;
        }
        if(v.find(sum)!=v.end())
        {
            return false;
        }
         v[sum]++;
         n=sum;
    }
        return true;
        
    }
};