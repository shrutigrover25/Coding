class Solution {
public:
    
bool isfeasible(int mid, vector<int>&nums, int m)
{
    int sum=0;
    int count=1;
    
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        
        if(sum>mid)
        {
            count++;
            sum=nums[i];
        }
    }
    
    if(count<=m)
    {
        return true;
    }
    
    return false;
}
    int splitArray(vector<int>& nums, int m) {
        

        
        int sumnums=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            sumnums+=nums[i];
        }
        
        int maxii=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxii)
            {
                maxii=nums[i];
            }
        }
        
        int low=maxii;
        int high=sumnums;
        
        int res;
        
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            
            if(isfeasible(mid,nums,m))
            {
                res=mid;
                high=mid-1;
            }
            
            else{
                low=mid+1;
            }
        }
        
        return res;
        
    }
};