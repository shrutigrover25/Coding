class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        vector<int>ans;
        
        int n=nums.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        int numl=0;
        int numr=0;
        
        int lsum=0;
        int rsum;
        
        for(int i=0;i<n;i++)
        {
           rsum=sum-lsum-nums[i];
           numr=n-1-i;
           ans.push_back(((numl*nums[i])-lsum + (rsum-(numr*nums[i]))));
           numl++;
           lsum+=nums[i];
                   
        }
        
        return ans;
        
    }
};