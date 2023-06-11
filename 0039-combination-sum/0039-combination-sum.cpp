class Solution {
public:
    
    void callfunc(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int>&ds, int index)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            
            return;
        }
        
        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            callfunc(candidates, target-candidates[index], ans, ds, index);
            ds.pop_back();
            
        }
        
        callfunc(candidates, target, ans, ds, index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        callfunc(candidates,target,ans,ds,0);
        
        return ans;
        
    }
};