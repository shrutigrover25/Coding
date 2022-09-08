class Solution {
public:
    
bool helper(vector<int>&bloomDay, int m, int k, int mid, int n)
{
    int adjacent=0;
    
    for(int i=0;i<n;i++)
    {
        if(bloomDay[i]<=mid)
        {
            adjacent++;
        }
        
        else
        {
            adjacent=0;

        }
        
        if(adjacent==k)
        {
            adjacent=0;
            m--;
        }
    }
    
    return m<=0; 
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n=bloomDay.size();
        
        if(m*k>n)
        {
            return -1;
        }
        
        int low=1;
        int high=1000000000;
        
        int ans;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(helper(bloomDay,m,k,mid,n))
            {
                ans=mid;
                high=mid-1;
            }
            
            else
            {
                low=mid+1;
            }
        }
        
        return ans;
        
    }
};