class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        
        int m=nums.size()+1;
        
        unordered_map<int,int>mp;
        int miss;
        
        int maxii=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                mp[nums[i]]++;
                maxii=max(maxii,nums[i]);
            }
        }
        int i=1;
        for(i=1;i<=maxii;i++)
        {
            if(mp.find(i) == mp.end())
            {
                return i;
            }
            
            
        }
        
      return i;
    }
};