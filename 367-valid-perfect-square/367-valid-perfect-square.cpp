class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1)
        {
            return true;
        }
        
        long long int start=0;
        long long int end=num;
        
        while(start+1<end)
        {
            long long int mid=start+(end-start)/2;
            
            if(mid*mid==num)
            {
                return true;
            }
            
            else if(mid*mid>num)
            {
                end=mid;
            }
            
            else
            {
                start=mid;
            }
        }
        
        return false;
        
    }
};