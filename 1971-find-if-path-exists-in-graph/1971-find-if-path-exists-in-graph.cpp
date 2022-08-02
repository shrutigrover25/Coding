class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int,vector<int>>mp;
        
        for(auto it:edges)
        {
            int a=it[0];
            int b=it[1];
            
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        
        vector<bool>vis(n,false);
        
        queue<int>q;
        
        if(source==destination)
        {
            return true;
        }
        
        q.push(source);
        vis[source]=true;
        
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            
            for(auto it:mp[x])
            {
                if(it==destination)
                {
                    return true;
                }
                
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
        
        return false;
    }
};