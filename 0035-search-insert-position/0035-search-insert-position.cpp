class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low=0;
        int n=nums.size();
        int high=nums.size()-1;
        
        int ans;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        
        if(high==n-1)
        {
            return  high+1;
        }
        
        return ans;
    }
};