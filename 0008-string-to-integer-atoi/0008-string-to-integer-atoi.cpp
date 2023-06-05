class Solution {
public:
    int myAtoi(string s) {
        
        int n=s.length();
        
        long indicator=1;
        
        int i=0;
        long result=0;
        
        while(s[i]==' ')
        {
            i++;
        }
        
        if(s[i]=='-' || s[i]=='+')
        {
            if(s[i]=='-')
            {
                indicator=-1;
            }
            
            else
            {
                indicator=+1;
            }
            
            i++;
        }
        
        while(s[i]>='0' && s[i]<='9')
        {
            int digit=s[i++]-'0';
            
            result=result*10+digit;
            
            
            
            if(result*indicator >= INT_MAX)
            {
                return INT_MAX;
            }
            
            if(result*indicator<=INT_MIN)
            {
                return INT_MIN;
            }
        }
        
        return result*indicator;
        
        
        
        
    }
};