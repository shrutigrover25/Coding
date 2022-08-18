class Solution {
public:
    
void callfun(vector<int>&candidates, int target, vector<vector<int>>&ans, vector<int>&temp, int i)
{
    if(i==candidates.size())
    {
        if(target==0)
        {
            ans.push_back(temp);
            
        }
        
        return;
    }
    
    if(candidates[i]<=target)
    {
        temp.push_back(candidates[i]);
        callfun(candidates,target-candidates[i],ans,temp,i);
        temp.pop_back();
    }
    
    callfun(candidates,target,ans,temp,i+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        callfun(candidates,target,ans,temp,0);
        
        return ans;
        
    }
};