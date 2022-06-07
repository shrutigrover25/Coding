class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if (k == 0)
            return false;
        if (nums.size() < 2)
            return false;
        vector<pair<long long ,long long >>v;
         int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(v[j].first-v[i].first <= t)
                {
                    if(abs(v[i].second-v[j].second)<=k)
                    {
                        return true;
                    }
                    
                }
                
                else
               {
                   break;
                }
            }
        }
        
        return false;
    }
};