class Solution {
public:
    
int minCost(vector<int>&cost,int i, vector<int>&dp,int n)
{
    if(i>=n)
    {
        return 0;
    }
    
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    
  dp[i]=cost[i]+min(minCost(cost,i+1,dp,n),minCost(cost,i+2,dp,n));
    
  return dp[i];
}
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n+1,-1);
        
        
        return min(minCost(cost,0,dp,n),minCost(cost,1,dp,n));
        
    }
};