class Solution {
public:
    
    int func(int n, int dp[])
    {
        if(n<=1)
        {
            return dp[n]=1;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        
       return dp[n]=func(n-1,dp)+func(n-2,dp);
        
    }
    int climbStairs(int n) {
        
        int dp[n+2];
        memset(dp,-1,sizeof(dp));
        
        return func(n,dp);
        
    }
};