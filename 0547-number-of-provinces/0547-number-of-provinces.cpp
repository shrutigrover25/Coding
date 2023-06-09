class Solution {
public:
    
    void dfs(int i, int vis[], vector<int>adj[])
    {
        vis[i]=1;
        
        for(auto it: adj[i])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        int m=isConnected[0].size();
        
        vector<int>adj[n];
        int vis[n];
        
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,vis,adj);
                
            }
        }
        
        
        return count;
        
    }
};