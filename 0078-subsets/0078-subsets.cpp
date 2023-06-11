class Solution {
public:
    
    void callfunc(vector<int>&nums, vector<vector<int>>&ans, int n, vector<int>&ds, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[i]);
        callfunc(nums,ans,n,ds,i+1);
        ds.pop_back();
        callfunc(nums,ans,n,ds,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        
        vector<int>ds;
        
        callfunc(nums, ans, n, ds, 0);
        
        return ans;
        
    }
};