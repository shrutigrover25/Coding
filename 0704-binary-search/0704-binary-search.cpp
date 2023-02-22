class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int left=0;
        int right=n-1;
        
        
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
           
            if(nums[mid]<target)
            {
                left=mid+1;
            }
            
            else
            {
                
                right=mid;
               
            }
        }
        
        if(nums[right]==target)
        {
            return right;
        }
        
        return -1;
        
        
        
    }
};