class Solution {
public:
    
    
int findrob(vector<int>&temp)
{
    int prev=temp[0];
    int prev2=0;
    int n=temp.size();
    
    for(int i=1;i<n;i++)
    {
        int take=temp[i]+prev2;
        int nottake=prev;
        prev2=prev;
        prev=max(take,nottake);
    }
    
    return prev;
}
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==1)
        {
            return nums[0];
        }
        
        vector<int>temp1,temp2;
        
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                temp1.push_back(nums[i]);
            }
            
            if(i!=n-1)
            {
                temp2.push_back(nums[i]);
            }
        }
        
        return max(findrob(temp1),findrob(temp2));
        
    }
};