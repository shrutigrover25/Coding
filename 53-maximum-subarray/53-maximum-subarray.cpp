class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        int max_sum=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
            if(max_sum<sum)
            {
                max_sum=sum;
            }
            
            if(sum<0)
            {
                sum=0;
            }
        }
        
        return max_sum;
        
    }
};