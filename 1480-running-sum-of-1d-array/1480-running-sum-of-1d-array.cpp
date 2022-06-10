class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>sum(n);
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
            sum[i]=ans;
        }
        
        return sum;
        
    }
};