class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        vector<int>v;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                v.push_back(it->first);
            }
        }
        
        return v;
        
    }
};