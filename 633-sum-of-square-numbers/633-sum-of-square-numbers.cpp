class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int l=0;
        int h=sqrt(c);
        
        while(l<=h)
        {
            if(pow(l,2)+pow(h,2)==c)
            {
                return true;
            }
            
            else if(pow(l,2)+pow(h,2)<c)
            {
                l++;
            }
            
            else
            {
            
            h--;
            }
        }
        
        return false;
    }
};