class Solution {
public:
    
int countatmost(vector<int>&nums, int k)
{
    int count=0;
    int left=0;
    int right=0;
    int n=nums.size();
    map<int,int>mp;
    
    
    while(right<n)
 {
    if(mp.find(nums[right])==mp.end())
    {
        mp[nums[right]]==0;
    }
        
    mp[nums[right]]++;
        
    while(mp.size()>k)
    {
        mp[nums[left]]=mp[nums[left]]-1;
        if(mp[nums[left]]==0)
        {
            mp.erase(nums[left]);
        }
        
        left++;
        
    }
        
    count+=right-left+1;
    right++;
    }
    
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return countatmost(nums,k)-countatmost(nums,k-1);
        
    }
};