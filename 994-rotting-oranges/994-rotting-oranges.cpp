class Solution {
public:
    
bool isvalid(int x, int y, int n, int m, vector<vector<int>>& grid )
{
    if(x>=0 && x<n && y>=0 && y<m && grid[x][y]==1)
    {
        return true;
    }
    
    return false;
}
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int time=0;
        
        int fresh=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        
        if(fresh==0)
        {
            return 0;
        }
        
        while(!q.empty())
        {
            int s=q.size();
            int temp=0;
            
            while(s!=0)
            {
                
                pair<int,int>p=q.front();
                
                q.pop();
                int x1=p.first;
                int y1=p.second;
                
                int arrx[4]={1,-1,0,0};
                int arry[4]={0,0,1,-1};
                
                for(int i=0;i<4;i++)
                {
                    int x=arrx[i]+x1;
                    int y=arry[i]+y1;
                    
                    if(isvalid(x,y,n,m,grid))
                    {
                        temp++;
                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }
                
                s--;
            }
            
            if(temp!=0)
            {
                time++;
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    time=0;
                }
            }
        }
        
        if(time==0)
        {
            return -1;
        }
        
        return time;
    }
};