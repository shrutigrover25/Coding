class Solution {
public:
    int fib(int n) {
        
        int prev2=0;
        int prev=1;
        
        if(n==0)
        {
            return prev2;
        }
        
        for(int i=2;i<=n;i++)
        {
            int curr=prev2+prev;
            prev2=prev;
            prev=curr;
        }
        
        return prev;
        
    }
};