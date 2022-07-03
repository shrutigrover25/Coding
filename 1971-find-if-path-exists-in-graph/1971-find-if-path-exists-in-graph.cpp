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
        
        if(source==destination)
        {
            return true;
        }
        queue<int>q;
        vector<bool>vis(n,false);
        q.push(source);
        vis[source]=true;
        
        while(!q.empty())
        {
            int s=q.front();
            q.pop();
            
            for(auto x:mp[s])
            {
                if(x==destination)
                {
                    return true;
                }
                
                if(!vis[x])
                {
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
        
        return false;
        
    }
};