class Solution {
public:
    
int dp[60];
    
int solve(int n)
{
    if(n==0)
    {
        return 0;
        
    }
    
    if(n==1)
    {
        return 1;
    }
    
    int ans=INT_MIN;
    
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,(i)*(solve(n-i)));
    }
    
    return dp[n]=ans;
}
    int integerBreak(int n) {
        
        if(n==2)
        {
            return 1;
        }
        
        if(n==3)
        {
            return 2;
        }
        
        memset(dp,-1,sizeof(dp));
        
        int ans=solve(n+1);
        
        return ans;
    }
};