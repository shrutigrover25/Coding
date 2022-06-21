class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int>odd;
        vector<int>eve;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                eve.push_back(nums[i]);
            }
            
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
        int even=0;
        int oddi=0;
        
        
        for(int j=0;j<nums.size();j++)
        {
            if(j%2==0)
            {
                nums[j]=eve[even++];
            }
            
            else
            {
               nums[j]=odd[oddi++];
            }
        }
        
        return nums;
    }
};