class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
            {
                return it->first;
            }
        }
        
        return 0;

            
    }
};