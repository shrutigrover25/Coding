class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1.0;
        long res=n;
        
        if(res<0)
        {
            res=-(1*res);
        }
        
        while(res>0)
        {
            if(res%2==0)
            {
                x=x*x;
                res=res/2;
            }
            
            else 
            {
                ans=ans*x;
                res=res-1;
                
            }
        }
        
        
        if(n<0)
        {
            return double(1.0)/double(ans);
        }
        
        return ans;
        
    }
};