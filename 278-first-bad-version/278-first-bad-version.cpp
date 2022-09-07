// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        
        int left=1;
        int high=n;
        
        while(left<high)
        {
            int m=left+(high-left)/2;
            
            
            if(isBadVersion(m))
            {
                high=m;
            }
            
            else
            {
                left=m+1;
            }
        }
        
        return left;
        
    }
};