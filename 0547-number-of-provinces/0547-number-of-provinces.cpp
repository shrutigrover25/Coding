class Solution {
public:
    
void dfs(int node, vector<int>&vis, vector<int>p[])
{
    vis[node]=1;
    
    for(auto it: p[node])
    {
        if(!vis[it])
        {
            dfs(it,vis,p);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        
        
        int n=isConnected.size();
        int m=isConnected[0].size();
        
        vector<int>p[n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    p[i].push_back(j);
                    p[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(n,0);
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,vis,p);
            }
        }
        
        return count;
        
    }
};