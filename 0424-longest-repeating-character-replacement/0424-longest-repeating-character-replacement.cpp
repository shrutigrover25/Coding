class Solution {
public:
    
    
    int func(string s, int k, char ch)
    {
        int l=0;
        int r=0;
        int n=s.length();
        
        int ans=0;
        int count=0;
        
        while(r<n)
        {
            if(s[r]!=ch)
            {
                count++;
            }
            
            while(count>k)
            {
                if(s[l]!=ch)
                {
                    count--;
                }
                
                l++;
            }
            
            ans=max(ans,r-l+1);
            r++;
        }
        
        return ans;
    }
    
    int characterReplacement(string s, int k) {
        
        int maxlength=0;
        
        for(int i=0;i<26;i++)
        {
            maxlength=max(maxlength,func(s,k,i+'A'));
        }
        
        return maxlength;
        
    }
};