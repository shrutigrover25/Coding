class Solution {
public:
    
bool bfs(int i,vector<int>&color,vector<vector<int>>&graph,int n)
{
    queue<int>q;
    q.push(i);
    color[i]=1;
    while(!q.empty())
    {
      int sk=q.front();
      q.pop();
        
      for(auto it:graph[sk])
      {
          if(color[it]==-1)
          {
              q.push(it);
              color[it]=1-color[sk];
          }
          
          else if(color[it]==color[sk])
          {
              return false;
          }
      }
    }
    
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>color(n,-1);
    
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!bfs(i,color,graph,n))
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};