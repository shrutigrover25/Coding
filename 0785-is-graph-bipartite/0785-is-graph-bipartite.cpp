class Solution {
public:
    
    bool bfs(int col[],vector<vector<int>>& graph,int V, int node)
    {
        queue<int>q;
        q.push(node);
        col[node]=0;
        
        
        while(!q.empty())
        {
            int first=q.front();
            q.pop();
            
            int colour=col[first];
            
            for(auto it:graph[first])
            {
                if(col[it]==-1)
                {
                    col[it]=1-colour;
                    q.push(it);
                }
                
                else if(col[it]==colour)
                {
                    return false;
                }
            }
        }
        
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int V=graph.size();
        int col[V];
        
        for(int i=0;i<V;i++)
        {
            col[i]=-1;
        }
        
        for(int i=0;i<V;i++)
        {
            if(col[i]==-1)
            {
                if(bfs(col,graph,V,i)==false)
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};