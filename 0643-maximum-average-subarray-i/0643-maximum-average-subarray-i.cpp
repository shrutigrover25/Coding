class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        int i=0;
        
        double sum=0;
        double maxii=0;
        
        for(;i<k;i++)
        {
            sum+=nums[i];
        }
        
        maxii=sum;
        
        int j=0;
        
        while(i<n)
        {
           sum-=nums[j];
           sum+=nums[i];
            
           j++;
           i++;
            
           maxii=max(maxii,sum);
            
        }
        
        return maxii/k;
        
    }
};