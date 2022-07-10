class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n=rooms.size();
        
        vector<bool>visited(n,false);
        queue<int>q;
        
        q.push(0);
        visited[0]=true;
        
        while(!q.empty())
        {
            int r=q.front();
            q.pop();
            
            for(auto it:rooms[r])
            {
                
                if(!visited[it])
                {
                q.push(it);
                visited[it]=true;
                }
            }
        }
        
        for(auto m:visited)
        {
            if(!m)
            {
                return m;
            }
        }
        
        return true;
        
    }
};