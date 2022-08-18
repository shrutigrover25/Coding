class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int>curr;
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        
        callans(nums,curr,ans,0);
        
        return ans;
        
    }
    
    void callans(vector<int>&nums, vector<int>&curr, vector<vector<int>>&ans,int ind)
    {
        ans.push_back(curr);
        
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1])
            {
                continue;
            }
            
            
            
            
            curr.push_back(nums[i]);
            callans(nums,curr,ans,i+1);
            curr.pop_back();
        }
    }
};