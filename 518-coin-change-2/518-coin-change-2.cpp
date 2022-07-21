class Solution {
public:
    
int callfun(vector<int>& coins, int amount, int n, int i, vector<vector<int>>&dp)
{
    if(amount==0)
    {
        return 1;
    }
    
    if(i>=n)
    {
        return 0;
    }
    
    if(dp[i][amount]!=-1)
    {
        return dp[i][amount];
    }
    
    int take=0;
    int nontake=0;
    
    if(coins[i]<=amount)
    {
        take=callfun(coins,amount-coins[i],n,i,dp);
    }
    

        nontake=callfun(coins,amount,n,i+1,dp);
    
    return dp[i][amount]=take+nontake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        if(!n)
        {
            return 0;
        }
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        
       return callfun(coins,amount,n,0,dp);
    }
};