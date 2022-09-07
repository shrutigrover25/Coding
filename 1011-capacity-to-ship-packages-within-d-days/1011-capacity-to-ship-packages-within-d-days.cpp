class Solution {
public:
    
bool helper(int mid,vector<int>&weights,int days)
{
    int sum=0;
    int count=1;
    
    for(int i=0;i<weights.size();i++)
    {
        sum+=weights[i];
        
        if(sum>mid)
        {
            count++;
            sum=weights[i];
        }
    }
    
    if(count<=days)
    {
        return true;
    }
    
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n=weights.size();
        
        int sumweight=0;
        
        for(int i=0;i<n;i++)
        {
            sumweight+=weights[i];
        }
        
        int maxii=0;
        
        for(int i=0;i<n;i++)
        {
            if(weights[i]>=maxii)
            {
                maxii=weights[i];
            }
        }
        
        int low=maxii;
        int high=sumweight;
        
        int res;
        
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(helper(mid,weights,days))
            {
                res=mid;
                high=mid-1;
            }
            
            else
            {
                low=mid+1;
            }
        }
        
        return res;
        
    }
};