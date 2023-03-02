class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.length();
        
        if(n==1)
        {
            return 1;
        }
        
        int i=0;
        int j=n-1;
        
        while(i<j && s[i]==s[j])
        {
            auto ch=s[i];
            
            while(i<=j && s[i]==ch)
            {
                i++;
            }
            
            while(i<j && s[j]==ch)
            {
                j--;
            }
            
        }
        
        return j-i+1;
        
    }
};