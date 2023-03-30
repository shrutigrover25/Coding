class Solution {
public:
    
void dfs(int src,int V, vector<int>adj[], vector<int>&vis)
{
    vis[src]=1;
    
    for(auto it: adj[src])
    {
        if(vis[it]==0)
        {
        dfs(it,V,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        int m=isConnected[0].size();
        
        vector<int>adj[n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(n,0);
        
        int V=n;
        int count=0;
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,V,adj,vis);
            }
        }
        
        
        return count;
        
    }
};