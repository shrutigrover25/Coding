class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
         int n=nums.size()-1;
   
        if(n==0) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n]!= nums[n-1]) return nums[n]; 
        
       
        int start=0;
        int end=n;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            
            else if(nums[mid]==nums[mid-1] && mid%2!=0 || nums[mid]==nums[mid+1] && mid%2==0)
            {
                start=mid+1;
            }
            
            else
            {
                end=mid-1;
            }
        }
        
        return -1;
    }
};