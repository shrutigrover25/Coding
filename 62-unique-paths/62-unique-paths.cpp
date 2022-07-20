class Solution {
public:
    
int callfun(int i, int j, int m, int n,vector<vector<int>>&dp)
{
    if(i==m-1 && j==n-1)
    {
        dp[i][j]=1;
    }
    
    if(i>=m || j>=n)
    {
        dp[i][j]=0;
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    int up=callfun(i+1,j,m,n,dp);
    int down=callfun(i,j+1,m,n,dp);
    
    return dp[i][j]=up+down;
    
    
    
}
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
       
        
        return callfun(0,0,m,n,dp);
    }
};