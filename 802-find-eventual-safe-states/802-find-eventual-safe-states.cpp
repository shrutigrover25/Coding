class Solution {
public:
    
bool dfscall(int s, vector<bool>&vis,vector<bool>&dfs, vector<vector<int>>&graph,vector<bool>&presentcycle)
{
    vis[s]=true;
    dfs[s]=true;
    
    vector<int>data=graph[s];
    
    for(auto it: data)
    {
        if(!vis[it])
        {
            if(dfscall(it,vis,dfs,graph,presentcycle))
            {
                return presentcycle[s]=true;
            }
        }
            
            else if(vis[it] && dfs[it])
            {
                return presentcycle[s]=true;
            }
        
    }
    dfs[s]=false;
    
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>ans;
        
        
        vector<bool>vis(n+1,false);
        vector<bool>dfs(n+1,false);
        vector<bool>presentcycle(n+1,false);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfscall(i,vis,dfs,graph,presentcycle);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(!presentcycle[i])
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};