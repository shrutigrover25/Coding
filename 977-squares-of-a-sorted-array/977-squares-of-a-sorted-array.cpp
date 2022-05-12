class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>v;
        
        int n=nums.size();
        
        int low=0;
        int high=n-1;
        
        while(low<=high)
        {
            if(abs(nums[low])>=abs(nums[high]))
            {
                 v.push_back(nums[low]*nums[low]);  
                 low++;
            }
               
            else
               {
                   v.push_back(nums[high]*nums[high]);
                    high--;
        
               }
             
        }
               
         reverse(v.begin(),v.end());
               
          return v;
        
    }
};