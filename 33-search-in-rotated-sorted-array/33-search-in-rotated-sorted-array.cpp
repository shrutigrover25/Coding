class Solution {
public:
    
int binaryi2(vector<int>&nums,int low, int high, int target)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target)
        {
            return mid;
        }
        
        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        
        else
        {
            low=mid+1;
        }
    }
    
    return -1;
}
    
int binaryi(vector<int>&nums,int low, int high, int target)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target)
        {
            return mid;
        }
        
        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        
        else
        {
            low=mid+1;
        }
    }
    
    return -1;
}
    
int findmin(vector<int>&nums, int target)
{
    int n=nums.size();
    int start=0;
    int end=n-1;
    int res;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        
        if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
        {
            return mid;
        }
        
        else if(nums[mid]<=nums[end])
        {
            end=mid-1;
        }
        
        else
        {
            start=mid+1;
        }
    }
    
    return 0;
}
int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int index=findmin(nums,target);
        int ans1=binaryi(nums,0,index-1,target);
        int ans2=binaryi2(nums,index,n-1,target);
        
        if(ans1!=-1)
        {
            return ans1;
        }
        
        else if(ans2!=-1)
        {
            return ans2;
        }
        
        else
        {
            return -1;
        }
        
        
        
        
        
    }
};