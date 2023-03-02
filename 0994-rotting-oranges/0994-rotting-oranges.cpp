class Solution {
public:
    
bool isvalid(int r, int c, int n, int m,vector<vector<int>>& grid )
{
    if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1)
    {
        return true;
    }
    
    return false;
}
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int freshor=0;
        int time=0;
        
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
                    freshor++;
                }
            }
        }
        
        if(freshor==0)
        {
            return 0;
        }
        
        while(!q.empty())
        {
            int temp=0;
            int s=q.size();
           
            while(s!=0)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                int arr1[]={1,0,-1,0};
                int arr2[]={0,1,0,-1};
                
                for(int k=0;k<4;k++)
                {
                    int r=arr1[k]+x;
                    int c=arr2[k]+y;
                    
                    if(isvalid(r,c,n,m,grid))
                    {
                        temp++;
                        grid[r][c]=2;
                        q.push({r,c});
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