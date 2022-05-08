class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int ans;
        vector<int>res;
      
        
        for(int i=0;i<nums.size();i++)
        {
            
            ans=nums[i];
            
            res.push_back(nums[ans]);
        }
        
        return res;
        
    }
};