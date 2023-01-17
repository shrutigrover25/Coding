class Solution {
public:
    
    int findlastpos(vector<int>&nums, int target, int low, int high, vector<int>&v)
{
    
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
    
int findfirstpos(vector<int>&nums, int target, int low, int high, vector<int>&v)
{
    
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
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        
        int low=0;
        int high=nums.size()-1;
        
        vector<int>v;
        
        int first =findfirstpos(nums,target,low,high,v);
        int last=findlastpos(nums,target,low,high,v);
        
        v.push_back(first);
        v.push_back(last);
        
        return v;
        
        
    }
};