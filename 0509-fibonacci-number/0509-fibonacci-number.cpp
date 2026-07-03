class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n ;
        // create a dp graph    
        vector<int> dp(n+1);

        // dp 0 and dp 1 is 0 and 1 , fibonnaci rule 
        dp[0]= 0;
        dp[1]= 1;
        for(int i =2; i<=n; i++){
            // fib[n] = fib [n-1]+ fib [n-2] sum of ;ast two nos
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        
    }
};