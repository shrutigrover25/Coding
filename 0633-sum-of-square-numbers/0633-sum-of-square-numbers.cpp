class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int a=0;
        int b=sqrt(c);
        
        while(a<=b)
        {
            if(pow(a,2)+ pow(b,2) ==c)
            {
                return true;
            }
            
            else if(pow(a,2)+pow(b,2)>c)
            {
                b--;
            }
            
            else
            {
                a++;
            }
                
        }
        
        return false;
        
    }
};