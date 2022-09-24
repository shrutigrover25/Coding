class Solution {
public:
    
bool ispalindrome(string s, int i, int j)
{
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        
        else
        {
            return false;
        }
    }
    
    return true;
}
    bool validPalindrome(string s) {
        
        int i=0;
        int j=s.length()-1;
        
        while(i<j)
        {
              if(i<=j && s[i]==s[j])
              {
                  i++;
                  j--;
              }
            
               else
               {
                   return ispalindrome(s,i+1,j)|| ispalindrome(s,i,j-1);
               }
             
        }
        
        return true;
        
    }
};