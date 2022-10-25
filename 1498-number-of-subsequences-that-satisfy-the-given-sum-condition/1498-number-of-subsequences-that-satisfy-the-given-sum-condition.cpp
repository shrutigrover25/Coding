class Solution {
public:
int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        
        vector<int>v(nums.size(),1);
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            v[i]=(2*v[i-1])%mod;
        }
        
        int i=0;
        int j=nums.size()-1;
        
        int ans=0;
        
        while(i<=j)
        {
            if(nums[i]+nums[j]>target)
            {
                j--;
            }
            
            else
            {
                ans=(ans+v[j-i])%mod;
                i++;
            }
        }
    
    return ans;
    }
};