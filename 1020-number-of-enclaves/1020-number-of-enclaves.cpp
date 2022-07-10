class Solution {
public:
    
bool isvalid(int i, int j, int n, int m, vector<vector<int>>&grid )
{
    if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1)
    {
        return true;
    }
    
    return false;
}
    
int count(vector<vector<int>>&grid)
{
    int n=grid.size();
    int m=grid[0].size();
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                ans++;
            }
        }
    }
    
    return ans;
}
    
void dfs(int i,int j, int n,int m,vector<vector<int>>&grid)
{
    grid[i][j]=0;
    
    if(isvalid(i+1,j,n,m,grid))
    {
        dfs(i+1,j,n,m,grid);
    }
    
    if(isvalid(i-1,j,n,m,grid))
    {
        dfs(i-1,j,n,m,grid);
    }
    
    if(isvalid(i,j-1,n,m,grid))
    {
        dfs(i,j-1,n,m,grid);
    }
    
    if(isvalid(i,j+1,n,m,grid))
    {
        dfs(i,j+1,n,m,grid);
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            int j=0;
            
            if(grid[i][j]==1)
            {
                dfs(i,j,n,m,grid);
            }
            
            j=m-1;
            
            if(grid[i][j]==1)
            {
                dfs(i,j,n,m,grid);
            }
        }
        
        for(int j=0;j<m;j++)
        {
            int i=0;
            
            if(grid[i][j]==1)
            {
                dfs(i,j,n,m,grid);
            }
            
            i=n-1;
            
            if(grid[i][j]==1)
            {
                dfs(i,j,n,m,grid);
            }
        }
        
        return count(grid);
        
    }
};