class Solution {
public:
    int mySqrt(int x) {
        
        long long int ans;
        long long int low=0;
        long long int high=x;
        long long int mid=0;
        
        
        while(low<=high)
        {
             mid=low+(high-low)/2;
            
            if(mid*mid<=x && (mid+1)*(mid+1)>x)
            {
                return mid;
            }
            
            else if(mid*mid>x)
            {
                 high=mid-1;
            }
            
            else
            {
                low=mid+1;
            }
        }
        
        return 0;
    }
};