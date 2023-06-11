class Solution {
public:
    
    int findfirst(vector<int>&nums, int target, int n)
    {
        int ans=-1;
        
        int low=0;
        int high=n-1;
        
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                ans=mid;
                high=mid-1;
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
        
        return ans;
        
    }
    
    
    int findlast(vector<int>&nums, int target, int n)
    {
        int res=-1;
        
        int low=0;
        int high=n-1;
        
       
        while(low<=high)
        {
            
             int mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                res=mid;
                low=mid+1;
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
        
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v;
        int n=nums.size();
        
        int ans=findfirst(nums,target,n);
        int res=findlast(nums,target,n);
        
        v.push_back(ans);
        v.push_back(res);
        
        return v;
        
    }
};