class Solution {
public:
    
bool dfs(int i, vector<int>&vis, vector<vector<int>>& graph)
{
    if(vis[i]==-1)
    {
        vis[i]=1;
    }
    
    for(auto it:graph[i])
    {
        int color=vis[i];
        
        if(vis[it]==-1)
        {
            vis[it]=1-color;
            
            if(!dfs(it,vis,graph))
            {
                return false;
            }
        }
        
        else if(vis[it]==color)
        {
            return false;
        }
    }
    
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        
        vector<int>vis(n+1,-1);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(!dfs(i,vis,graph))
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};