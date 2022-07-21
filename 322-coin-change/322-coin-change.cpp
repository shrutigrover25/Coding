class Solution {
public:
    
int callfun(vector<int>&coins,int amount,int i, vector<vector<int>>&dp)
{
    if(i==0)
    {
        if(amount%coins[i]==0)
        {
            return amount/coins[i];
        }
        
        else
        {
            return 1e9;
        }
        
    }
    
    if(dp[amount][i]!=-1)
    {
        return dp[amount][i];
    }
    
    int notatke=0+callfun(coins,amount,i-1,dp);
    int take=1e9;
    
    if(coins[i]<=amount)
    {
        take=1+callfun(coins,amount-coins[i],i,dp);
    }
    
    return dp[amount][i]=min(take,notatke);
}
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(amount+1,vector<int>(coins.size(),-1));
        
        int ans=callfun(coins,amount,coins.size()-1,dp);
        
        
        if(ans>=1e9)
        {
            return -1;
        }
        
        return ans;
    }
};