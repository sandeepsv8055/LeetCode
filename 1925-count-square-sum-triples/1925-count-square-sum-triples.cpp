class Solution {
public:
    int countTriples(int n) {
        int cnt =0;
        for(int a =1;a<=n;a++){
            for(int b = a+1;b<=n;b++){
                int sum = a*a +b*b;
                int x = sqrt(sum);
                if(x*x == sum && x<=n) cnt += 2;
            }
        }
        return cnt;

        //brute
        // int cnt =0;
        // for(int a =1;a<=n;a++){
        //     for(int b =1;b<=n;b++){
        //         for(int c=1;c<=n;c++){
        //             if(a*a + b*b == c*c) cnt++;
        //         }
        //     }
        // }
        // return cnt;
        
    }
};