class Solution {
public:

int lastoccurence(vector<int>&nums, int target)
{
    int start=0;
    int end=nums.size()-1;
    int ans=-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(nums[mid]==target)
        {
          ans=mid;
          start=mid+1;
        }
      
        else if(nums[mid]<target)
        {
           start=mid+1;
        }
        
        else
        {
           end=mid-1;
        }
    }
    
     return ans;
}
    
int firstoccurence(vector<int> &nums, int target)
{
   int start=0;
    int end=nums.size()-1;
    int ans=-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(nums[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
        
        else if(nums[mid]<target)
        {
           start=mid+1;
        }
        
        else
        {
          end=mid-1;
        }
    }
    
    return ans;
    
}

vector<int> searchRange(vector<int>& nums, int target) {
    
       
      int lo1=firstoccurence(nums,target);
      int lo2= lastoccurence(nums,target);
        
      
        
     vector<int>v;
      
     v.push_back(lo1);
     v.push_back(lo2);
        
     return v;
    
    }
};