class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum=0;
        
        int n=nums.size();
        
        int prefix[n];
        
        map<int,int>mp;
        
        prefix[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            prefix[i]=nums[i]+prefix[i-1];
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(prefix[i]==k)
            {
                ans++;
            }
            
            if(mp.find(prefix[i]-k)!=mp.end())
            {
                ans+=mp[prefix[i]-k];
            }
            
            mp[prefix[i]]++;
        }
        
        return ans;
        
    }
};