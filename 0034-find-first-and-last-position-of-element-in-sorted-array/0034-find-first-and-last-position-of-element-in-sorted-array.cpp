class Solution {
public:
    
int firstocc(vector<int>&nums, int n, int target)
{
    int low=0;
    int high=n-1;
    
    int ans=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
        }
    }
    
    return ans;
}
    
    
int lastocc(vector<int>&nums, int n, int target)
{
    int low=0;
    int high=n-1;
    
    int ans=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target)
        {
            ans=mid;
            low=mid+1;
        }
        
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
        }
    }
    
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v;
        
        int n=nums.size();
        
       
        int ans=firstocc(nums,n,target);
        int res=lastocc(nums,n,target);
        
        v.push_back(ans);
        v.push_back(res);
        
        return v;
        
    }
};