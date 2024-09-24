class Solution {
public:
    int climbStairs(int n) {
        //recursive  TLE
        // if(n==1) return 1;
        // if(n==2) return 2;
        // return climbStairs(n-2) + climbStairs(n-1);

        //iterrative
       
       
    
    if(n<=2) return n;
    int a=2,b=1,result;
    for(int i=3;i<=n;i++){
        result=a+b;
        b=a;
        a=result;
    }
    return result;

    }
};