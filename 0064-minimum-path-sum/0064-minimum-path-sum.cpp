class Solution {
public:
    
int callfunc(int i, int j, int n, int m, vector<vector<int>>&grid, vector<vector<int>>&dp)
{
    if(i==n-1 && j==m-1)
    {
        return grid[n-1][m-1];
    }
    
    if(i>=n || j>=m)
    {
        return INT_MAX;
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    
    return dp[i][j]=grid[i][j]+min(callfunc(i+1,j,n,m,grid,dp),callfunc(i,j+1,n,m,grid,dp));
}
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return callfunc(0,0,n,m,grid,dp);
        
    }
};