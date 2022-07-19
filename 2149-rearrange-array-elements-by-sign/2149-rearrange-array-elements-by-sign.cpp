class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int p=0;
        int n=1;
        
        vector<int>ans(nums.size(),0);
        
        int s=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p+=2;
            }
            
            else if(nums[i]<0)
            {
                ans[n]=nums[i];
                n+=2;
            }
        }
        
        return ans;
    }
};