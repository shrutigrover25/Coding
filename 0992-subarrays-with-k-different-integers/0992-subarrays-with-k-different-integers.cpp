class Solution {
public:
    
    int findans(vector<int>&nums, int k)
    {
        int r=0;
        int l=0;
        map<int,int>mp;
        
        int n=nums.size();
        
        int count=0;
        
        while(r<n)
        {
            mp[nums[r]]++;
            
            while(mp.size()>k)
            {
                mp[nums[l]]--;
                
                if(mp[nums[l]]==0)
                {
                    mp.erase(nums[l]);
                }
                
                l++;
            }
            
            count+=r-l+1;
            r++;
        }
        
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return findans(nums,k)-findans(nums,k-1);
        
    }
};