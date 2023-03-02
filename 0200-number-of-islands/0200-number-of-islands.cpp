class Solution {
public:
    
void dfs(vector<vector<char>>&grid,int i, int j, int n, int m)
{
    if(i>=n || i<0 || j>=m || j<0 || grid[i][j]!='1')
    {
        return;
    }
    
    grid[i][j]='2';
    
    
    dfs(grid,i+1,j,n,m);
    dfs(grid,i,j+1,n,m);
    dfs(grid,i-1,j,n,m);
    dfs(grid,i,j-1,n,m);
    
    
}
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        
        
        int m=grid[0].size();
        
        int count=0;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                     count++;
                     dfs(grid,i,j,n,m);
                }
            }
        }
            
            return count;
    }
};