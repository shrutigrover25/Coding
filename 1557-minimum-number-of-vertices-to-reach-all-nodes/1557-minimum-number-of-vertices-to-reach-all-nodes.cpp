class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<int>ans;
        vector<int>indeg(n,0);
        
        for(auto i:edges)
        {
            indeg[i[1]]++;
        }
        
        for(int it=0;it<n;it++)
        {
            if(indeg[it]==0)
            {
                ans.push_back(it);
            }
        }
        
        return ans;
    }
};