class Solution {
public:
    
void findcom(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&ds, int index)
{
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }
    
    for(int i=index;i<candidates.size();i++)
    {
        if(i>index && candidates[i]==candidates[i-1] )
        {
            continue;
        }
        
        if(candidates[i]>target)
        {
            break;
        }
        
        ds.push_back(candidates[i]);
        findcom(candidates,target-candidates[i],ans,ds,i+1);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        
        findcom(candidates,target,ans,ds,0);
        return ans;
        
    }
};