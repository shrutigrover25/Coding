class Solution {
public:
    
bool dfscall(int i,vector<bool>&vis, vector<bool>&dfs,vector<int>adj[], vector<vector<int>>& prerequisites, int numCourses)
{
    vis[i]=true;
    dfs[i]=true;
    
    
    
    for(auto it: adj[i])
    {
        if(!vis[it])
        {
            if(dfscall(it,vis,dfs,adj,prerequisites,numCourses))
            {
                return true;
            }
        }
        
        else if(vis[it] && dfs[it])
        {
            return true;
        }
    }
    
    dfs[i]=false;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
       
        int n=numCourses;
         vector<int>adj[n];
        
        for(auto x:prerequisites)
        {
            vector<int>data=x;
            int a=data[0];
            int b=data[1];
            
            adj[a].push_back(b);
        }
        
        vector<bool>vis(n,false);
        vector<bool>dfs(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfscall(i,vis,dfs,adj,prerequisites,numCourses))
                {
                    return false;
                }
            }
            
        }
        
        return true;
    }
};