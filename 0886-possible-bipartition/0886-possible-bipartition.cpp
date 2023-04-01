class Solution {
public:
    
bool bfs(int n, vector<vector<int>>&adj,vector<int>&vis, int i)
{
   queue<int>q;
   q.push(i);
   vis[i]=1;
    
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        int color=vis[node];
            
        for(auto it:adj[node])
        {
            if(vis[it]==-1)
            {
                q.push(it);
                vis[it]=1-vis[node];
            }
            
            else if(vis[it]==vis[node])
            {
                return false;
            }
        }
    }
    
    return true;
}
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<int>vis(n+1,-1);
       vector<vector<int>>adj(n+1);
          
          for(auto i:dislikes)
          {
              adj[i[0]].push_back(i[1]);
              adj[i[1]].push_back(i[0]);      
          }
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==-1)
            {
                if(!bfs(n,adj,vis,i))
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};