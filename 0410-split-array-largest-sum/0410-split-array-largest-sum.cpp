class Solution {
public:
    
    
int ispossible(int mid, vector<int>&nums, int k)
{
    int sum=0;
    int count=1;
    
    for(int i=0;i<nums.size();i++)
    {
        if(sum+nums[i]>mid)
        {
            count++;
            sum=0;
        }
        
        sum+=nums[i];
    }
    
    if(count>k)
    {
        return false;
    }
    
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        int low=*max_element(nums.begin(),nums.end());
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        int high=sum;
        int ans;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(ispossible(mid,nums,k))
            {
                ans=mid;
                high=mid-1;
            }
            
            else
            {
                low=mid+1;
            }
        }
        
        return ans;
    }
};