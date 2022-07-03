class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int n=edges.size();
        
        unordered_map<int,vector<int>>mp;
        
        for(auto it:edges)
        {
            int a=it[0];
            int b=it[1];
            
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        
        for(auto it:mp)
        {
            if(it.second.size()>1)
            {
                return it.first;
            }
        }
        
        return -1;
        
    }
};