class Solution {
public:
    bool isHappy(int n) {
        
        set<int>s;
        
        int rem;
        int temp=n;
        
        
        while(n!=1)
        {
            
            if(s.find(n)==s.end())
            {
                s.insert(n);
            }
            
            else
            {
                return false;
                break;
            }
            int sum=0;
            
            while(n!=0)
            {
            rem=n%10;
            sum+=(rem*rem);
            n=n/10;
            }
            
            
          n=sum;
        }
        
        return true;
        
    }
};