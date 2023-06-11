class Solution {
public:
    
    void callfunc(vector<int>& candidates, int target, int index, vector<vector<int>>&ans, vector<int>&ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<candidates.size();i++)
        {
            
           if(i>index && candidates[i]==candidates[i-1])
           {
               continue;
           }
            if(candidates[i]<=target)
            {
                ds.push_back(candidates[i]);
                callfunc(candidates, target-candidates[i], i+1, ans, ds);
                ds.pop_back();
                
            }
            
            else
            {
                break;
            }
            
           
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>v;
        
        sort(candidates.begin(), candidates.end());
        
        callfunc(candidates,target,0,ans,v);
        
        return ans;
        
    }
};