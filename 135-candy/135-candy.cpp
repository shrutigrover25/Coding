class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        
        vector<int>v(n,1);
        
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                v[i]=v[i-1]+1;
            }
            
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                v[i]=max(v[i],v[i+1]+1);
            }
        }
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        
        return sum;
        
    }
};