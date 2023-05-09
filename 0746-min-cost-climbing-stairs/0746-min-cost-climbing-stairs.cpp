class Solution {
public:
    
    int funct(int n, vector<int>&cost, int dp[], int i)
    {
        if(i<0)
        {
            return 0;
        }
        
        if(i==1 || i==0)
        {
            dp[i]=cost[i];
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        return dp[i]=cost[i]+ min(funct(n,cost,dp,i-1),funct(n,cost,dp,i-2));
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        
        return min(funct(n,cost,dp,n-1),funct(n,cost,dp,n-2));
        
        
    }
};