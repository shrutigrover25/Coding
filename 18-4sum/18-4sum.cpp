class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
      int n=nums.size();
    vector<vector<int>> ans;
   
    if(n<4)
        return ans;
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int k=j+1;
            int h=n-1;
            while(k<h)
            {
                long long curr_sum=nums[i]+nums[j];
                curr_sum+=nums[k];
                curr_sum+=nums[h];
                if(curr_sum==target)
                {
                    ans.push_back({nums[i],nums[j],nums[k],nums[h]});
                    while(k<h and nums[k]==nums[k+1])   // [-2 -1 -1 -1 1 1 1 2 2] 
                           k++;                         //   i  j  k            h 
                    while(k<h and nums[h]==nums[h-1])  //          k++          h--
                            h--;                                //Removing Dublicates
                      
                    k++;
                    h--;
                }
                else if(curr_sum>target)
                {
                    h--;
                }
                else
                    k++;
            }
            while(j<n-2 and nums[j]==nums[j+1])
                j++;
        
        }
        while(i<n-3 and nums[i]==nums[i+1])
            i++;
    }
    return ans;
    }
};