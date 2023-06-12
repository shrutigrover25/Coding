class Solution {
public:
    
    bool valid(int mid, vector<int>&nums, int threshold)
    {
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil(float(nums[i])/float(mid));
        }
        
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(valid(mid,nums,threshold)==true)
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