class Solution {
public:
    
int callfun(int i, int j, int n, int m, vector<vector<int>>& obstacleGrid, vector<vector<int>>&dp )
{
   if(i<=n-1 && j<=m-1 && obstacleGrid[i][j]==1)
   {
       return 0;
   }
   if(i==n-1 && j==m-1)
   {
       return dp[i][j]= 1;
   }
    
   if(i>=n || j>=m)
   {
       return 0;
   }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    int up=callfun(i+1,j,n,m,obstacleGrid,dp);
    int down=callfun(i,j+1,n,m,obstacleGrid,dp);
    
    return dp[i][j]=up+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return callfun(0,0,n,m,obstacleGrid,dp);
        
    }
};