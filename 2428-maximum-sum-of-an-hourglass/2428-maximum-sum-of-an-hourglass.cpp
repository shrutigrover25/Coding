class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int maxii=INT_MIN;
        
        for(int i=1;i+1<n;i++)
        {
            for(int j=1;j+1<m;j++)
            {
              int sum= grid[i][j]+grid[i-1][j-1]+grid[i-1][j]+grid[i-1][j+1]+grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j-1];
            
            
            maxii=max(sum,maxii);
            }
        }
        
        return maxii;
        
    }
};