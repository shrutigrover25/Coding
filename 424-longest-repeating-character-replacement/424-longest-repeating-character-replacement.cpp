class Solution {
public:
    
int replace(string s, int k, char ch)
{
    int count=0;
    int right=0;
    int left=0;
    int maxlen=1;
    int n=s.size();
    
    
    while(right<n)
    {
        if(s[right]!=ch)
        {
            count++;
        }
        
        while(count>k)
        {
            if(s[left]!=ch)
            {
                count--;
            }
            
            left++;
        }
        
        maxlen=max(maxlen,right-left+1);
        right++;
        
    }
    
    return maxlen;
}
    int characterReplacement(string s, int k) {
        
        int maxlen=1;
        
        for(int i=0;i<26;i++)
        {
            maxlen=max(maxlen,replace(s,k,i+'A'));
                
        }
     
        return maxlen;
        
    }
};