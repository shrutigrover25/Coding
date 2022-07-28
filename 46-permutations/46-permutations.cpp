class Solution {
public:
    
void recurpermuate(vector<int>&nums, int n, vector<vector<int>>&ans, vector<int>&ds, int freq[])
{
    if(ds.size()==n)
    {
        ans.push_back(ds);
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        if(!freq[i])
        {
       freq[i]=1;
        ds.push_back(nums[i]);
        recurpermuate(nums, n,ans,ds,freq);
        freq[i]=0;
        ds.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        int freq[n];
        
        for(int i=0;i<n;i++)
        {
            freq[i]=0;
        }
        vector<int>ds;
        
        recurpermuate(nums,n,ans,ds,freq);
        
        return ans;
        
    }
};