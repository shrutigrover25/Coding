class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end() && abs(mp[nums[i]]-i)<=k)
            {
                return true;
            }
            
            mp[nums[i]]=i;
        }
        
        return false;
        
    }
};