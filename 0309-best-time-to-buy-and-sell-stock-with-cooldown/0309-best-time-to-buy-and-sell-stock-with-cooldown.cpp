class Solution {
public:
    
int callfunc(vector<int>&prices, int i, int n, vector<vector<int>>&dp, int buy)
{
    if(i>=n)
    {
        return 0;
    }
    int profit=0;
    if(dp[i][buy]!=-1)
    {
        return dp[i][buy];
    }
    
    if(buy==1)
    {
        profit=max(-prices[i]+callfunc(prices,i+1,n,dp,0),0+callfunc(prices,i+1,n,dp,1));
    }
    
    else
    {
       profit=max(prices[i]+callfunc(prices,i+2,n,dp,1),0+callfunc(prices,i+1,n,dp,0));
    }
    
    return dp[i][buy]=profit;
}
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return callfunc(prices,0,n,dp,1);
    }
};