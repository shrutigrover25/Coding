class Solution {
public:
    
int steps(int n, vector<int>&dp)
{
   if(n==0)
   {
       return dp[n]=1;
   }
    
   if(n==1)
   {
       return dp[n]=1;
   }
    
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    return dp[n]=steps(n-1,dp)+steps(n-2,dp);
}
    
    
int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);
         dp[0]=1;
         dp[1]=1;
       int ans= steps(n,dp);
        
        return ans;
        
    }
};