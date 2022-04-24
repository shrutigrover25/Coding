class Solution {
public:
    int mySqrt(int x) {
        
        long long int start=0;
        long long int end=x;
        long long int mid=0;
        long long int ans;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            if(mid*mid<=x && (mid+1)*(mid+1)>x)
            {
                return mid;
            }
            
            else if(mid*mid>x)
            {
                end=mid-1;
            }
            
            else
            {
                start=mid+1;
            }
            
        }
        return 0;
    }
};