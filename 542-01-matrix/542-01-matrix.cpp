class Solution {
public:
    
bool isvalid(int a, int b, int r, int c)
{
    if(a>=0 && a<r && b>=0 && b<c)
    {
        return true;
    }
    
    return false;
}
    
    vector<vector<int>> dir={{1,0},{0,1},{0,-1},{-1,0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        
        
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>dist(n,vector<int>(m,-1));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    dist[i][j]=0;
                    
                }
            }
        }
        
        while(!q.empty())
        {
            pair<int,int>curr=q.front();
            q.pop();
            
            for(auto it:dir)
            {
                int a=curr.first+it[0];
                int b=curr.second+it[1];
                
                if(isvalid(a,b,n,m) && dist[a][b]==-1)
                {
                    q.push({a,b});
                    dist[a][b]=dist[curr.first][curr.second]+1;
                }
            }
            
        }
        
        return dist;
    }
};