class Solution {
public:
    int arrangeCoins(int n) {
        
        long low=0;
        long high=n;
        long temp;
        
        while(low<=high)
        {
            long mid=low+(high-low)/2;
            temp=(mid)*(mid+1)/2;
            
            if(temp==n)
            {
                return mid;
            }
            
            else if(temp<n)
            {
                low=mid+1;
            }
            
            else
            {
                high=mid-1;
            }
            
            
            
        }
        
        return low-1;
    }
};