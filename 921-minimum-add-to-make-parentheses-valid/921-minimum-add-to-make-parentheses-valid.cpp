class Solution {
public:
    int minAddToMakeValid(string s) {
        
        
        int count=0;
        int res=0;
        
        for(char c:s)
        {
            if(c=='(')
            {
                count++;
            }
            
            else
            {
                count--;
            }
            
            if(count<0)
            {
                res++;
                count++;
            }
        }
        
        res+=count;
        
        return res;
        
    }
};