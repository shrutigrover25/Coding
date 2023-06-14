class Solution {
public:
    
    int findans(vector<int>&nums, int s, int n)
    {
        int sum=0;
        
        if(s<0)
        {
            return 0;
        }
        int count=0;
        
        int r=0;
        int l=0;
        
        while(r<n)
        {
            sum+=nums[r];
            
            while(sum>s)
            {
                sum-=nums[l];
                l++;
            }
            
            count+=r-l+1;
            r++;
        }
        
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int n=nums.size();
        
        return findans(nums,goal,n)-findans(nums,goal-1,n);
        
    }
};