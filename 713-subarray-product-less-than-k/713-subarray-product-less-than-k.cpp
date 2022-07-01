class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int j=0;
        int ans=0;
        int prod=1;
        
        if(k<=0)
        {
            return 0;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            
            while(j<nums.size() && prod>=k)
            {
                prod=prod/nums[j];
                j++;
            }
            
            if(prod<k)
            {
            
            ans+=i-j+1;
            }
        }
        
        return ans;
    }
};