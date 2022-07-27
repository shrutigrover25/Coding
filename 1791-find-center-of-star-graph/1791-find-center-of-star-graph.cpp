class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>mp;
        int ans;
        
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
                ans=it.first;
            }
        }
        
        return ans;
        
    }
};