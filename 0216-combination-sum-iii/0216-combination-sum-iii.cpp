class Solution {
public:
    
    void callfunc(int i, int k, vector<vector<int>>&ans, int n, vector<int>&v, int sum)
    {
        if(sum>n)
        {
            return;
        }
        
        if(k==0)
        {
            if(sum==n)
            {
                ans.push_back(v);
               
            }
            return;
        }
        
        if(i==10)
        {
            return;
        }
        
        v.push_back(i);
        callfunc(i+1,k-1,ans,n,v,sum+i);
        v.pop_back();
        callfunc(i+1,k,ans,n,v,sum);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>ans;
        vector<int>v;
        
        callfunc(1,k,ans,n,v,0);
        
        return ans;
        
    }
};