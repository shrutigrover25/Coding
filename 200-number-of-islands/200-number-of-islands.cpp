class Solution {
public:
    
void markcurrent(vector<vector<char>>&grid, int x, int y, int r, int c)
{
    if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1')
    {
        return;
    }
    
    grid[x][y]='2';
    
    markcurrent(grid,x-1,y,r,c);
    markcurrent(grid,x+1,y,r,c);
    markcurrent(grid,x,y+1,r,c);
    markcurrent(grid,x,y-1,r,c);
}
    

    int numIslands(vector<vector<char>>& grid) {
        
        int row=grid.size();
        
        if(row==0)
        {
            return 0;
        }
        
        int column=grid[0].size();
        
        int count=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(grid[i][j]=='1')
                {
                    markcurrent(grid,i,j,row,column);
                    count++;
                }
            }
        }
        
        return count;
        
    }
};