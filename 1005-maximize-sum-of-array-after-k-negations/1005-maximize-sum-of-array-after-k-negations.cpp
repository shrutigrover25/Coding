class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int m=0;
        
       while(m<k)
       {
           sort(nums.begin(),nums.end());
           
           nums[0]=nums[0]*(-1);
           
           m++;
       }
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        return sum;
    }
};