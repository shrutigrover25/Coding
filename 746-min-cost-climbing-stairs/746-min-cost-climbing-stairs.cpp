class Solution {
public:
    
int findans(int i, vector<int>&cost, vector<int>&dp,int n)
{
    if(i>=n)
    {
        return  0;
    }
    
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    
    dp[i]= cost[i]+min(findans(i+1,cost,dp,n),findans(i+2,cost,dp,n));
    
    return dp[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n+2,-1);
        
        int ans=min(findans(0,cost,dp,n),findans(1,cost,dp,n));
        
        return ans;
        
    }
};