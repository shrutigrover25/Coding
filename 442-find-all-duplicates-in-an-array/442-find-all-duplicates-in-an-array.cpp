class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int>mp;
        
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==2)
            {
                v.push_back(it->first);
            }
        }
        
        return v;
    }
};