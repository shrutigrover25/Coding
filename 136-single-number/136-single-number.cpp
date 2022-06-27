class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int ans;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                ans=it->first;
                break;
            }
        }
        
        return ans;
    }
};