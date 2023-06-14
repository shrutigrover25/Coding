class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i=0;
        int j=0;
        
        int n=nums.size();
        
        double sum=0;
        double maxii=0;
        
        for(i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        
        maxii=sum;
        
        while(i<n)
        {
            sum+=nums[i];
            sum-=nums[j];
            i++;
            j++;
            
            if(sum>maxii)
            {
                maxii=sum;
            }
        }
        
        return maxii/k;
        
    }
};